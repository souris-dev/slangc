//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_INTEXPRESSIONCHECKER_H
#define SLANG_INTEXPRESSIONCHECKER_H

#include "ExpressionChecker.h"
#include "FunctionCallExprChecker.h"

class IntExpressionChecker : public ExpressionChecker {
public:
    explicit IntExpressionChecker(std::shared_ptr<SymbolTable> symbolTable);

    antlrcpp::Any checkExpr(SlangGrammarParser::ExprContext *ctx) override;

    // Note: If this class fails to instantiate an object properly because of being an abstract
    // class or for some other reason, then understand that the virtual function checkBooleanExpr
    // in ExressionChecker is probably the culprit because we don't have an override of that here

    antlrcpp::Any visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) override;

    antlrcpp::Any visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) override;

    antlrcpp::Any visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) override;

    antlrcpp::Any visitExprModulo(SlangGrammarParser::ExprModuloContext *ctx) override;

    antlrcpp::Any visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) override;

    antlrcpp::Any visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) override;

    antlrcpp::Any visitExprParen(SlangGrammarParser::ExprParenContext *ctx) override;

    antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;

    antlrcpp::Any visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) override;

private:
    template<class T>
    bool checkBinaryOp(T *ctx);

    template<class T>
    bool checkUnaryOp(T *ctx);
};


#endif //SLANG_INTEXPRESSIONCHECKER_H
