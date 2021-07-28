
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SlangGrammarParser : public antlr4::Parser {
public:
  enum {
    PROGSTART = 1, PROGEND = 2, LPAREN = 3, RPAREN = 4, LCURLYBR = 5, RCURLYBR = 6, 
    LSQBR = 7, RSQBR = 8, PLUS = 9, MINUS = 10, DIVIDE = 11, MULT = 12, 
    MODULO = 13, EQUAL = 14, LT = 15, GT = 16, LTEQ = 17, GTEQ = 18, COMP = 19, 
    COMPNOTEQ = 20, MARKERCOMMULTILINESTART = 21, MARKERCOMMULTILINEEND = 22, 
    MARKERCOMSINGLELINE = 23, COMMENT = 24, LOGICALAND = 25, LOGICALOR = 26, 
    LOGICALXOR = 27, LOGICALNOT = 28, TRUE = 29, FALSE = 30, IF = 31, ELSE = 32, 
    FUNCDEF = 33, VARDEF = 34, BINAND = 35, BINOR = 36, BINXOR = 37, BINNOT = 38, 
    RIGHTARROW = 39, COLON = 40, STATEMENTEND = 41, WHILE = 42, RETURN = 43, 
    INTTYPE = 44, STRINGTYPE = 45, BOOLTYPE = 46, VOIDTYPE = 47, NULLVALUE = 48, 
    DECINT = 49, IDENTIFIER = 50, STRING = 51, COMMA = 52, NEWLINE = 53, 
    TAB = 54, WHITESPACE = 55, OTHER = 56
  };

  enum {
    RuleProgram = 0, RuleStatements = 1, RuleCommentMultiline = 2, RuleStatement = 3, 
    RuleReturnStmt = 4, RuleAssignStmt = 5, RuleExpr = 6, RuleDeclStmt = 7, 
    RuleTypeName = 8, RuleDeclAssignStmt = 9, RuleBlock = 10, RuleIfStmt = 11, 
    RuleWhileStmt = 12, RuleBooleanExpr = 13, RuleCompOp = 14, RuleRelOp = 15, 
    RuleCompoundStmt = 16, RuleFuncDef = 17, RuleFuncArgList = 18, RuleArgParam = 19, 
    RuleCallArgList = 20, RuleFunctionCall = 21
  };

  explicit SlangGrammarParser(antlr4::TokenStream *input);
  ~SlangGrammarParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementsContext;
  class CommentMultilineContext;
  class StatementContext;
  class ReturnStmtContext;
  class AssignStmtContext;
  class ExprContext;
  class DeclStmtContext;
  class TypeNameContext;
  class DeclAssignStmtContext;
  class BlockContext;
  class IfStmtContext;
  class WhileStmtContext;
  class BooleanExprContext;
  class CompOpContext;
  class RelOpContext;
  class CompoundStmtContext;
  class FuncDefContext;
  class FuncArgListContext;
  class ArgParamContext;
  class CallArgListContext;
  class FunctionCallContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *PROGSTART();
    antlr4::tree::TerminalNode *PROGEND();
    StatementsContext *statements();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementsContext : public antlr4::ParserRuleContext {
  public:
    StatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<CompoundStmtContext *> compoundStmt();
    CompoundStmtContext* compoundStmt(size_t i);
    std::vector<FuncDefContext *> funcDef();
    FuncDefContext* funcDef(size_t i);
    std::vector<CommentMultilineContext *> commentMultiline();
    CommentMultilineContext* commentMultiline(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementsContext* statements();

  class  CommentMultilineContext : public antlr4::ParserRuleContext {
  public:
    CommentMultilineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MARKERCOMMULTILINESTART();
    antlr4::tree::TerminalNode *MARKERCOMMULTILINEEND();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CommentMultilineContext* commentMultiline();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATEMENTEND();
    DeclStmtContext *declStmt();
    AssignStmtContext *assignStmt();
    DeclAssignStmtContext *declAssignStmt();
    FunctionCallContext *functionCall();
    ReturnStmtContext *returnStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ReturnStmtContext : public antlr4::ParserRuleContext {
  public:
    ReturnStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStmtContext* returnStmt();

  class  AssignStmtContext : public antlr4::ParserRuleContext {
  public:
    AssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    AssignStmtContext() = default;
    void copyFrom(AssignStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BooleanExprAssignContext : public AssignStmtContext {
  public:
    BooleanExprAssignContext(AssignStmtContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    BooleanExprContext *booleanExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprAssignContext : public AssignStmtContext {
  public:
    ExprAssignContext(AssignStmtContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  AssignStmtContext* assignStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ExprParenContext : public ExprContext {
  public:
    ExprParenContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprPlusContext : public ExprContext {
  public:
    ExprPlusContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *PLUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprModuloContext : public ExprContext {
  public:
    ExprModuloContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MODULO();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMinusContext : public ExprContext {
  public:
    ExprMinusContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MINUS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprStringContext : public ExprContext {
  public:
    ExprStringContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *STRING();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnaryMinusContext : public ExprContext {
  public:
    UnaryMinusContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *MINUS();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprIdentifierContext : public ExprContext {
  public:
    ExprIdentifierContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDecintContext : public ExprContext {
  public:
    ExprDecintContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *DECINT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprDivideContext : public ExprContext {
  public:
    ExprDivideContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *DIVIDE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMultiplyContext : public ExprContext {
  public:
    ExprMultiplyContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MULT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprFunctionCallContext : public ExprContext {
  public:
    ExprFunctionCallContext(ExprContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  DeclStmtContext : public antlr4::ParserRuleContext {
  public:
    DeclStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclStmtContext* declStmt();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTTYPE();
    antlr4::tree::TerminalNode *STRINGTYPE();
    antlr4::tree::TerminalNode *VOIDTYPE();
    antlr4::tree::TerminalNode *BOOLTYPE();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  DeclAssignStmtContext : public antlr4::ParserRuleContext {
  public:
    DeclAssignStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    DeclAssignStmtContext() = default;
    void copyFrom(DeclAssignStmtContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BooleanDeclAssignStmtContext : public DeclAssignStmtContext {
  public:
    BooleanDeclAssignStmtContext(DeclAssignStmtContext *ctx);

    antlr4::tree::TerminalNode *VARDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *BOOLTYPE();
    antlr4::tree::TerminalNode *EQUAL();
    BooleanExprContext *booleanExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NormalDeclAssignStmtContext : public DeclAssignStmtContext {
  public:
    NormalDeclAssignStmtContext(DeclAssignStmtContext *ctx);

    antlr4::tree::TerminalNode *VARDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  DeclAssignStmtContext* declAssignStmt();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LCURLYBR();
    antlr4::tree::TerminalNode *RCURLYBR();
    StatementsContext *statements();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  IfStmtContext : public antlr4::ParserRuleContext {
  public:
    IfStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    BooleanExprContext *booleanExpr();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStmtContext* ifStmt();

  class  WhileStmtContext : public antlr4::ParserRuleContext {
  public:
    WhileStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    BooleanExprContext *booleanExpr();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();
    antlr4::tree::TerminalNode *IDENTIFIER();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStmtContext* whileStmt();

  class  BooleanExprContext : public antlr4::ParserRuleContext {
  public:
    BooleanExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    BooleanExprContext() = default;
    void copyFrom(BooleanExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  BooleanExprRelOpContext : public BooleanExprContext {
  public:
    BooleanExprRelOpContext(BooleanExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    RelOpContext *relOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanFunctionCallContext : public BooleanExprContext {
  public:
    BooleanFunctionCallContext(BooleanExprContext *ctx);

    FunctionCallContext *functionCall();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprOrContext : public BooleanExprContext {
  public:
    BooleanExprOrContext(BooleanExprContext *ctx);

    std::vector<BooleanExprContext *> booleanExpr();
    BooleanExprContext* booleanExpr(size_t i);
    antlr4::tree::TerminalNode *LOGICALOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprNotContext : public BooleanExprContext {
  public:
    BooleanExprNotContext(BooleanExprContext *ctx);

    antlr4::tree::TerminalNode *LOGICALNOT();
    BooleanExprContext *booleanExpr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprCompOpContext : public BooleanExprContext {
  public:
    BooleanExprCompOpContext(BooleanExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    CompOpContext *compOp();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprParenContext : public BooleanExprContext {
  public:
    BooleanExprParenContext(BooleanExprContext *ctx);

    antlr4::tree::TerminalNode *LPAREN();
    BooleanExprContext *booleanExpr();
    antlr4::tree::TerminalNode *RPAREN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprIdentifierContext : public BooleanExprContext {
  public:
    BooleanExprIdentifierContext(BooleanExprContext *ctx);

    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanTrueContext : public BooleanExprContext {
  public:
    BooleanTrueContext(BooleanExprContext *ctx);

    antlr4::tree::TerminalNode *TRUE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanFalseContext : public BooleanExprContext {
  public:
    BooleanFalseContext(BooleanExprContext *ctx);

    antlr4::tree::TerminalNode *FALSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprXorContext : public BooleanExprContext {
  public:
    BooleanExprXorContext(BooleanExprContext *ctx);

    std::vector<BooleanExprContext *> booleanExpr();
    BooleanExprContext* booleanExpr(size_t i);
    antlr4::tree::TerminalNode *LOGICALXOR();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  BooleanExprAndContext : public BooleanExprContext {
  public:
    BooleanExprAndContext(BooleanExprContext *ctx);

    std::vector<BooleanExprContext *> booleanExpr();
    BooleanExprContext* booleanExpr(size_t i);
    antlr4::tree::TerminalNode *LOGICALAND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  BooleanExprContext* booleanExpr();
  BooleanExprContext* booleanExpr(int precedence);
  class  CompOpContext : public antlr4::ParserRuleContext {
  public:
    CompOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMP();
    antlr4::tree::TerminalNode *COMPNOTEQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompOpContext* compOp();

  class  RelOpContext : public antlr4::ParserRuleContext {
  public:
    RelOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LTEQ();
    antlr4::tree::TerminalNode *GTEQ();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelOpContext* relOp();

  class  CompoundStmtContext : public antlr4::ParserRuleContext {
  public:
    CompoundStmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    IfStmtContext *ifStmt();
    WhileStmtContext *whileStmt();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStmtContext* compoundStmt();

  class  FuncDefContext : public antlr4::ParserRuleContext {
  public:
    FuncDefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    FuncDefContext() = default;
    void copyFrom(FuncDefContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  ImplicitRetTypeFuncDefContext : public FuncDefContext {
  public:
    ImplicitRetTypeFuncDefContext(FuncDefContext *ctx);

    antlr4::tree::TerminalNode *FUNCDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    BlockContext *block();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FuncArgListContext *funcArgList();
    antlr4::tree::TerminalNode *STATEMENTEND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExplicitRetTypeFuncDefContext : public FuncDefContext {
  public:
    ExplicitRetTypeFuncDefContext(FuncDefContext *ctx);

    antlr4::tree::TerminalNode *RIGHTARROW();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *FUNCDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    BlockContext *block();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FuncArgListContext *funcArgList();
    antlr4::tree::TerminalNode *STATEMENTEND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  FuncDefContext* funcDef();

  class  FuncArgListContext : public antlr4::ParserRuleContext {
  public:
    SlangGrammarParser::ArgParamContext *argParamContext = nullptr;
    std::vector<ArgParamContext *> args;
    FuncArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ArgParamContext *> argParam();
    ArgParamContext* argParam(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncArgListContext* funcArgList();

  class  ArgParamContext : public antlr4::ParserRuleContext {
  public:
    ArgParamContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *COLON();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgParamContext* argParam();

  class  CallArgListContext : public antlr4::ParserRuleContext {
  public:
    SlangGrammarParser::ExprContext *exprContext = nullptr;
    std::vector<ExprContext *> callParams;
    CallArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CallArgListContext* callArgList();

  class  FunctionCallContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *RIGHTARROW();
    antlr4::tree::TerminalNode *IDENTIFIER();
    CallArgListContext *callArgList();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallContext* functionCall();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool booleanExprSempred(BooleanExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

