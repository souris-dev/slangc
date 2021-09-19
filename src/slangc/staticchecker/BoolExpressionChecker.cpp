//
// Created by suore on 04-08-2021.
//

#include "BoolExpressionChecker.h"
#include "ExpressionTypeDetector.h"
#include <utility>

BoolExpressionChecker::BoolExpressionChecker(std::shared_ptr<SymbolTable> symbolTable)
                        : ExpressionChecker(std::move(symbolTable)) {

}

template<class T>
bool BoolExpressionChecker::checkBinaryOp(T *ctx) {
    bool leftOperandOK = visit(ctx->booleanExpr(0)).template as<bool>();
    bool rightOperandOK = visit(ctx->booleanExpr(1)).template as<bool>();

    return (leftOperandOK && rightOperandOK);
}

template<class T>
bool BoolExpressionChecker::checkUnaryOp(T *ctx) {
    bool operandOK = visit(ctx->booleanExpr()).template as<bool>();
    return operandOK;
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) {
    return checkUnaryOp<SlangGrammarParser::BooleanExprNotContext>(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) {
    return checkBinaryOp<SlangGrammarParser::BooleanExprOrContext>(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) {
    return checkBinaryOp<SlangGrammarParser::BooleanExprAndContext>(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) {
    return checkBinaryOp<SlangGrammarParser::BooleanExprXorContext>(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) {
    // We'll first have to discern the type of the LHS and then see
    // if the RHS matches that type or not

    auto lhs = ctx->expr(0);
    auto rhs = ctx->expr(1);

    ExpressionTypeDetector typeDetector(symbolTable);
    std::pair<bool, SymbolType> lhsType = typeDetector.getType(lhs);
    std::pair<bool, SymbolType> rhsType = typeDetector.getType(rhs);


    // utility part to return the line number and relop representation as string
    size_t lineNum = 0;
    std::string op;
    auto theRelOp = ctx->relOp();

    if (theRelOp->GT()) {
        lineNum = theRelOp->GT()->getSymbol()->getLine();
        op = theRelOp->GT()->getSymbol()->getText();
    }
    else if (theRelOp->GTEQ()) {
        lineNum = theRelOp->GTEQ()->getSymbol()->getLine();
        op = theRelOp->GTEQ()->getSymbol()->getText();
    }
    else if (theRelOp->LT()) {
        lineNum = theRelOp->LT()->getSymbol()->getLine();
        op = theRelOp->LT()->getSymbol()->getText();
    }
    else if (theRelOp->LTEQ()) {
        lineNum = theRelOp->LTEQ()->getSymbol()->getLine();
        op = theRelOp->LTEQ()->getSymbol()->getText();
    }


    // check if the expressions themselves have homogeneous types within
    if (!lhsType.first || !rhsType.first) {
        // TODO: throw error for bad types in expression and return false. Also the below checks.

        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression on " << (!lhsType.first ? "LHS" : "RHS") << " has mixed types in it and cannot be evaluated.";
        std::cerr << std::endl;
        return false;
    }

    // check if these expressions return void
    if (lhsType.second == SymbolType::VOID || rhsType.second == SymbolType::VOID) {
        // throw error for void-returning expressions and return false
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression on " << (lhsType.second == SymbolType::VOID ? "LHS" : "RHS")
                    << " returns void and cannot be compared.";
        std::cerr << std::endl;
        return false;
    }

    // finally, check if the expression types on lhs and rhs match
    if (lhsType.second != rhsType.second) {
        // throw error for type mismatch on lhs and rhs and return false
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression return types on " << "LHS and RHS do not match.";
        std::cerr << std::endl << "The LHS returns " << SymbolUtils::getSymbolTypeAsString(lhsType.second);
        std::cerr << "but the RHS returns " << SymbolUtils::getSymbolTypeAsString(rhsType.second);
        std::cerr << std::endl;
        return false;
    }

    // check if relational operators can be used for the given types
    if (!SymbolUtils::canTypeBeUsedWithRelOp(lhsType.second)) {
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The operator '" << op << "' cannot be used for the return type of these expressions. " << std::endl;
        std::cerr << "(Cannot compare two " << SymbolUtils::getSymbolTypeAsString(lhsType.second) << "s. ";
        std::cerr << std::endl;
        return false;
    }

    // if all checks passed, return true
    return true;
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) {
    // We'll first have to discern the type of the LHS and then see
    // if the RHS matches that type or not

    auto lhs = ctx->expr(0);
    auto rhs = ctx->expr(1);

    ExpressionTypeDetector typeDetector(symbolTable);
    std::pair<bool, SymbolType> lhsType = typeDetector.getType(lhs);
    std::pair<bool, SymbolType> rhsType = typeDetector.getType(rhs);


    // utility part to return the line number and relop representation as string
    size_t lineNum = 0;
    std::string op;
    auto theRelOp = ctx->compOp();

    if (theRelOp->COMP()) {
        lineNum = theRelOp->COMP()->getSymbol()->getLine();
        op = theRelOp->COMP()->getSymbol()->getText();
    }
    else if (theRelOp->COMPNOTEQ()) {
        lineNum = theRelOp->COMPNOTEQ()->getSymbol()->getLine();
        op = theRelOp->COMPNOTEQ()->getSymbol()->getText();
    }


    // check if the expressions themselves have homogeneous types within
    if (!lhsType.first || !rhsType.first) {
        // TODO: throw error for bad types in expression and return false. Also the below checks.

        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression on " << (!lhsType.first ? "LHS" : "RHS") << " has mixed types in it and cannot be evaluated.";
        std::cerr << std::endl;
        return false;
    }

    // check if these expressions return void
    if (lhsType.second == SymbolType::VOID || rhsType.second == SymbolType::VOID) {
        // throw error for void-returning expressions and return false
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression on " << (lhsType.second == SymbolType::VOID ? "LHS" : "RHS")
                  << " returns void and cannot be compared.";
        std::cerr << std::endl;
        return false;
    }

    // finally, check if the expression types on lhs and rhs match
    if (lhsType.second != rhsType.second) {
        // throw error for type mismatch on lhs and rhs and return false
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The expression return types on " << "LHS and RHS do not match.";
        std::cerr << std::endl << "The LHS returns " << SymbolUtils::getSymbolTypeAsString(lhsType.second);
        std::cerr << "but the RHS returns " << SymbolUtils::getSymbolTypeAsString(rhsType.second);
        std::cerr << std::endl;
        return false;
    }

    // check if relational operators can be used for the given types
    if (!SymbolUtils::canTypeBeUsedWithCompOp(lhsType.second)) {
        std::cerr << "[Error, Line " << lineNum << "] ";
        std::cerr << "The operator '" << op << "' cannot be used for the return type of these expressions. " << std::endl;
        std::cerr << "(Cannot compare two " << SymbolUtils::getSymbolTypeAsString(lhsType.second) << "s. ";
        std::cerr << std::endl;
        return false;
    }

    // if all checks passed, return true
    return true;
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) {
    return checkUnaryOp<SlangGrammarParser::BooleanExprParenContext>(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) {
    return checkIdentifierTypeInExpr<SlangGrammarParser::BooleanExprIdentifierContext>(ctx, SymbolType::BOOL);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanTrue(SlangGrammarParser::BooleanTrueContext *ctx) {
    return true;
}

antlrcpp::Any BoolExpressionChecker::visitBooleanFalse(SlangGrammarParser::BooleanFalseContext *ctx) {
    // this should not return false; we aren't evaluating, just checking
    return true;
}

antlrcpp::Any BoolExpressionChecker::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallNoArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::BOOL) {
        return true;
    }
    else {
        // TODO: throw error because expected return type was bool but got something else
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Expected return type was bool but this function call returns "
                    << SymbolUtils::getSymbolTypeAsString(returnSymbolType) << "." << std::endl;
        return false;
    }
}

antlrcpp::Any BoolExpressionChecker::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallWithArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::BOOL) {
        return true;
    }
    else {
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Expected return type was bool but this function call returns "
                  << SymbolUtils::getSymbolTypeAsString(returnSymbolType) << "." << std::endl;
        return false;
    }
}

antlrcpp::Any BoolExpressionChecker::checkExpr(SlangGrammarParser::BooleanExprContext *ctx) {
    return visit(ctx);
}
