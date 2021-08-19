//
// Created by suore on 04-08-2021.
//

#include "BoolExpressionChecker.h"

#include <utility>

BoolExpressionChecker::BoolExpressionChecker(std::shared_ptr<SymbolTable> symbolTable)
                        : ExpressionChecker(std::move(symbolTable)) {

}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprNot(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprOr(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprAnd(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprXor(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprRelOp(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprCompOp(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprParen(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprIdentifier(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanTrue(SlangGrammarParser::BooleanTrueContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanTrue(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanFalse(SlangGrammarParser::BooleanFalseContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanFalse(ctx);
}

antlrcpp::Any BoolExpressionChecker::visitBooleanFunctionCall(SlangGrammarParser::BooleanFunctionCallContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanFunctionCall(ctx);
}

antlrcpp::Any BoolExpressionChecker::checkExpr(SlangGrammarParser::BooleanExprContext *ctx) {
    return visit(ctx);
}
