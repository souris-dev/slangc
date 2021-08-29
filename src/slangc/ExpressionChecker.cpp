//
// Created by suore on 04-08-2021.
//

#include "ExpressionChecker.h"

ExpressionChecker::ExpressionChecker(std::shared_ptr<SymbolTable> symbolTable) : symbolTable(std::move(symbolTable)) {}

antlrcpp::Any ExpressionChecker::visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprModulo(SlangGrammarParser::ExprModuloContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprParen(SlangGrammarParser::ExprParenContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitExprString(SlangGrammarParser::ExprStringContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanTrue(SlangGrammarParser::BooleanTrueContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanFalse(SlangGrammarParser::BooleanFalseContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitBooleanFunctionCall(SlangGrammarParser::BooleanFunctionCallContext *ctx) {
    return false;
}

antlrcpp::Any ExpressionChecker::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    return SlangGrammarBaseVisitor::visitFunctionCallWithArgs(ctx);
}

antlrcpp::Any ExpressionChecker::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    return SlangGrammarBaseVisitor::visitFunctionCallNoArgs(ctx);
}

antlrcpp::Any ExpressionChecker::checkExpr(SlangGrammarParser::ExprContext *ctx) {
    return false;
}

template<class T>
antlrcpp::Any ExpressionChecker::checkIdentifierTypeInExpr(T *ctx, SymbolType expectedType) {
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
    if (symbol->isSymbolType(expectedType)) {
        return true;
    }
    else {
        // TODO: Throw error for wrong type
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "The identifier " << idName << " has a type mismatch with the expected result of the expression. ";
        std::cerr << "Expected type is " << symbol->getSymbolTypeAsString()
                    << " but the identifier has a different type. " << std::endl;
        exit(-1);
    }
}
