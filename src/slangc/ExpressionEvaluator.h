//
// Created by suore on 17-07-2021.
//

#ifndef SLANG_EXPRESSIONEVALUATOR_H
#define SLANG_EXPRESSIONEVALUATOR_H

#include "SlangGrammarBaseVisitor.h"
#include "SymbolTable.h"
#include "Symbol.h"

template<class T>
class ExpressionEvaluator : public SlangGrammarBaseVisitor {
public:
    explicit ExpressionEvaluator(std::shared_ptr<SymbolTable> symbolTable);

    T evaluate(SlangGrammarParser::ExprContext *ctx);

    bool evaluate(SlangGrammarParser::BooleanExprContext *ctx);

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

private:
    std::shared_ptr<SymbolTable> symbolTable;

    void evaluateBooleanExpr(SlangGrammarParser::BooleanExprContext *ctx);

    void evaluateFunctionCallExpr(SlangGrammarParser::FunctionCallContext *ctx);
};


#endif //SLANG_EXPRESSIONEVALUATOR_H
