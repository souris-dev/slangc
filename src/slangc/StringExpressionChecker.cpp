//
// Created by suore on 04-08-2021.
//

#include "StringExpressionChecker.h"

#include <utility>

StringExpressionChecker::StringExpressionChecker(std::shared_ptr<SymbolTable> symbolTable)
        : ExpressionChecker(std::move(symbolTable)) {

}

antlrcpp::Any StringExpressionChecker::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    return checkIdentifierTypeInExpr<SlangGrammarParser::ExprIdentifierContext>(ctx, SymbolType::STRING);
}

antlrcpp::Any StringExpressionChecker::visitExprString(SlangGrammarParser::ExprStringContext *ctx) {
    return true;
}

antlrcpp::Any StringExpressionChecker::visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) {
    // TODO: change this when we support concatenation of string
    return false;
}

antlrcpp::Any StringExpressionChecker::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallNoArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::INT) {
        return true;
    }
    else {
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Expected return type was string but this function call returns "
                  << SymbolUtils::getSymbolTypeAsString(returnSymbolType) << "." << std::endl;
        return false;
    }
}

antlrcpp::Any StringExpressionChecker::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    auto returnSymbolType = FunctionCallExprChecker::visitFunctionCallWithArgs(ctx, symbolTable).as<SymbolType>();
    if (returnSymbolType == SymbolType::INT) {
        return true;
    }
    else {
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Expected return type was string but this function call returns "
                  << SymbolUtils::getSymbolTypeAsString(returnSymbolType) << "." << std::endl;
        return false;
    }
}
