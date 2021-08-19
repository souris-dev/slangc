//
// Created by suore on 04-08-2021.
//

#include "IntExpressionChecker.h"

#include <utility>

IntExpressionChecker::IntExpressionChecker(std::shared_ptr<SymbolTable> symbolTable) :
ExpressionChecker(std::move(symbolTable)) {}

template<class T>
bool IntExpressionChecker::checkBinaryOp(T *ctx) {
    bool leftOperandOK = visit(ctx->expr(0)).template as<bool>();
    bool rightOperandOK = visit(ctx->expr(1)).template as<bool>();

    return (leftOperandOK && rightOperandOK);
}

template<class T>
bool IntExpressionChecker::checkUnaryOp(T *ctx) {
    bool operandOK = visit(ctx->expr()).template as<bool>();
    return operandOK;
}

antlrcpp::Any IntExpressionChecker::visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) {
    // check if the operand is OK (of type int)
    return checkUnaryOp<SlangGrammarParser::UnaryMinusContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) {
    // check if the left and right operands are of right type
    return checkBinaryOp<SlangGrammarParser::ExprDivideContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) {
    // check if the left and right operands are of right type
    return checkBinaryOp<SlangGrammarParser::ExprMultiplyContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprModulo(SlangGrammarParser::ExprModuloContext *ctx) {
    // check if the left and right operands are of right type
    return checkBinaryOp<SlangGrammarParser::ExprModuloContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) {
    return checkBinaryOp<SlangGrammarParser::ExprPlusContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) {
    return checkBinaryOp<SlangGrammarParser::ExprMinusContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprParen(SlangGrammarParser::ExprParenContext *ctx) {
    return checkUnaryOp<SlangGrammarParser::ExprParenContext>(ctx);
}

antlrcpp::Any IntExpressionChecker::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    // Resolve and return

    auto idName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(idName);

    if (symbol == nullptr) {
        // TODO: throw error and terminate because symbol was not found
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Unknown identifier: " << idName << "." << std::endl;
        exit(-1);
    }

    // Perform type checking of the return type of the expression and the identifier
    if (symbol->isSymbolType(SymbolType::INT)) {
        return true;
    }
        // TODO: when more datatypes are added, add typechecking for them too
    else {
        // TODO: Throw error for wrong type
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "The identifier " << idName << " has a type mismatch with the expected result of the expression.";
        std::cerr << "Expected type is int but the identifier has a different type. " << std::endl;
        exit(-1);
    }
}

antlrcpp::Any IntExpressionChecker::visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) {
    return true;
}

antlrcpp::Any IntExpressionChecker::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallNoArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::INT) {
        return true;
    }
    else {
        return false;
    }
}

antlrcpp::Any IntExpressionChecker::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallWithArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::INT) {
        return true;
    }
    else {
        return false;
    }
}

antlrcpp::Any IntExpressionChecker::checkExpr(SlangGrammarParser::ExprContext *ctx) {
    return visit(ctx);
}
