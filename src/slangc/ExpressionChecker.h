//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_EXPRESSIONCHECKER_H
#define SLANG_EXPRESSIONCHECKER_H

#include "SlangGrammarBaseVisitor.h"
#include "SymbolTable.h"
#include "Symbol.h"

class ExpressionChecker : public SlangGrammarBaseVisitor {
public:
    explicit ExpressionChecker(std::shared_ptr<SymbolTable> symbolTable);

    virtual antlrcpp::Any checkExpr(SlangGrammarParser::ExprContext *ctx);

    antlrcpp::Any visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) override;

    antlrcpp::Any visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) override;

    antlrcpp::Any visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) override;

    antlrcpp::Any visitExprModulo(SlangGrammarParser::ExprModuloContext *ctx) override;

    antlrcpp::Any visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) override;

    antlrcpp::Any visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) override;

    antlrcpp::Any visitExprParen(SlangGrammarParser::ExprParenContext *ctx) override;

    antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) override;

    antlrcpp::Any visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) override;

    antlrcpp::Any visitExprString(SlangGrammarParser::ExprStringContext *ctx) override;

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

    antlrcpp::Any visitBooleanFunctionCall(SlangGrammarParser::BooleanFunctionCallContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

protected:
    std::shared_ptr<SymbolTable> symbolTable;

    template<class T>
    antlrcpp::Any checkIdentifierTypeInExpr(T *ctx, SymbolType expectedType);
};

#endif //SLANG_EXPRESSIONCHECKER_H
