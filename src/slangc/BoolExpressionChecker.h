//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_BOOLEXPRESSIONCHECKER_H
#define SLANG_BOOLEXPRESSIONCHECKER_H

#include "ExpressionChecker.h"
#include "FunctionCallExprChecker.h"

class BoolExpressionChecker : public ExpressionChecker {
public:
    explicit BoolExpressionChecker(std::shared_ptr<SymbolTable> symbolTable);

    antlrcpp::Any checkExpr(SlangGrammarParser::BooleanExprContext *ctx);

    antlrcpp::Any visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) override;

    antlrcpp::Any visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) override;

    antlrcpp::Any visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) override;

    antlrcpp::Any visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) override;

    antlrcpp::Any visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) override;

    antlrcpp::Any visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) override;

    antlrcpp::Any visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) override;

    antlrcpp::Any visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) override;

    antlrcpp::Any visitBooleanTrue(SlangGrammarParser::BooleanTrueContext *ctx) override;

    antlrcpp::Any visitBooleanFalse(SlangGrammarParser::BooleanFalseContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;

private:
    template<class T>
    bool checkBinaryOp(T *ctx);

    template<class T>
    bool checkUnaryOp(T *ctx);
};


#endif //SLANG_BOOLEXPRESSIONCHECKER_H
