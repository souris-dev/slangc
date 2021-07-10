
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "SlangGrammarVisitor.h"


/**
 * This class provides an empty implementation of SlangGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  SlangGrammarBaseVisitor : public SlangGrammarVisitor {
public:

  virtual antlrcpp::Any visitProgram(SlangGrammarParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatements(SlangGrammarParser::StatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCommentMultiline(SlangGrammarParser::CommentMultilineContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(SlangGrammarParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturnStmt(SlangGrammarParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignStmt(SlangGrammarParser::AssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpr(SlangGrammarParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclStmt(SlangGrammarParser::DeclStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeName(SlangGrammarParser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclAssignStmt(SlangGrammarParser::DeclAssignStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(SlangGrammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStmt(SlangGrammarParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhileStmt(SlangGrammarParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBooleanExpr(SlangGrammarParser::BooleanExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompOp(SlangGrammarParser::CompOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOp(SlangGrammarParser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStmt(SlangGrammarParser::CompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncDef(SlangGrammarParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFuncArgList(SlangGrammarParser::FuncArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgParam(SlangGrammarParser::ArgParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCallArgList(SlangGrammarParser::CallArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunctionCall(SlangGrammarParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }


};

