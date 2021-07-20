
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SlangGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by SlangGrammarParser.
 */
class  SlangGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by SlangGrammarParser.
   */
    virtual antlrcpp::Any visitProgram(SlangGrammarParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatements(SlangGrammarParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitCommentMultiline(SlangGrammarParser::CommentMultilineContext *context) = 0;

    virtual antlrcpp::Any visitStatement(SlangGrammarParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitReturnStmt(SlangGrammarParser::ReturnStmtContext *context) = 0;

    virtual antlrcpp::Any visitExprAssign(SlangGrammarParser::ExprAssignContext *context) = 0;

    virtual antlrcpp::Any visitBooleanExprAssign(SlangGrammarParser::BooleanExprAssignContext *context) = 0;

    virtual antlrcpp::Any visitExprParen(SlangGrammarParser::ExprParenContext *context) = 0;

    virtual antlrcpp::Any visitExprPlus(SlangGrammarParser::ExprPlusContext *context) = 0;

    virtual antlrcpp::Any visitExprModulo(SlangGrammarParser::ExprModuloContext *context) = 0;

    virtual antlrcpp::Any visitExprMinus(SlangGrammarParser::ExprMinusContext *context) = 0;

    virtual antlrcpp::Any visitExprString(SlangGrammarParser::ExprStringContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *context) = 0;

    virtual antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitExprDecint(SlangGrammarParser::ExprDecintContext *context) = 0;

    virtual antlrcpp::Any visitExprDivide(SlangGrammarParser::ExprDivideContext *context) = 0;

    virtual antlrcpp::Any visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *context) = 0;

    virtual antlrcpp::Any visitExprFunctionCall(SlangGrammarParser::ExprFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitDeclStmt(SlangGrammarParser::DeclStmtContext *context) = 0;

    virtual antlrcpp::Any visitTypeName(SlangGrammarParser::TypeNameContext *context) = 0;

    virtual antlrcpp::Any visitNormalDeclAssignStmt(SlangGrammarParser::NormalDeclAssignStmtContext *context) = 0;

    virtual antlrcpp::Any visitBooleanDeclAssignStmt(SlangGrammarParser::BooleanDeclAssignStmtContext *context) = 0;

    virtual antlrcpp::Any visitBlock(SlangGrammarParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitIfStmt(SlangGrammarParser::IfStmtContext *context) = 0;

    virtual antlrcpp::Any visitWhileStmt(SlangGrammarParser::WhileStmtContext *context) = 0;

    virtual antlrcpp::Any visitBooleanExpr(SlangGrammarParser::BooleanExprContext *context) = 0;

    virtual antlrcpp::Any visitCompOp(SlangGrammarParser::CompOpContext *context) = 0;

    virtual antlrcpp::Any visitRelOp(SlangGrammarParser::RelOpContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(SlangGrammarParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitImplicitRetTypeFuncDef(SlangGrammarParser::ImplicitRetTypeFuncDefContext *context) = 0;

    virtual antlrcpp::Any visitExplicitRetTypeFuncDef(SlangGrammarParser::ExplicitRetTypeFuncDefContext *context) = 0;

    virtual antlrcpp::Any visitFuncArgList(SlangGrammarParser::FuncArgListContext *context) = 0;

    virtual antlrcpp::Any visitArgParam(SlangGrammarParser::ArgParamContext *context) = 0;

    virtual antlrcpp::Any visitCallArgList(SlangGrammarParser::CallArgListContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCall(SlangGrammarParser::FunctionCallContext *context) = 0;


};

