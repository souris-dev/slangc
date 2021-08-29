//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_STRINGEXPRESSIONCHECKER_H
#define SLANG_STRINGEXPRESSIONCHECKER_H

#include "ExpressionChecker.h"
#include "FunctionCallExprChecker.h"

class StringExpressionChecker : public ExpressionChecker {
public:
    explicit StringExpressionChecker(std::shared_ptr<SymbolTable> symbolTable);

    antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) override;

    antlrcpp::Any visitExprString(SlangGrammarParser::ExprStringContext *ctx) override;

    antlrcpp::Any visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;
};


#endif //SLANG_STRINGEXPRESSIONCHECKER_H
