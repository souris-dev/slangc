
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SlangGrammarParser : public antlr4::Parser {
public:
  enum {
    PROGSTART = 1, PROGEND = 2, LPAREN = 3, RPAREN = 4, LCURLYBR = 5, RCURLYBR = 6, 
    LSQBR = 7, RSQBR = 8, PLUS = 9, MINUS = 10, DIVIDE = 11, MULT = 12, 
    EQUAL = 13, LT = 14, GT = 15, LTEQ = 16, GTEQ = 17, COMP = 18, COMPNOTEQ = 19, 
    MARKERCOMMULTILINESTART = 20, MARKERCOMMULTILINEEND = 21, MARKERCOMSINGLELINE = 22, 
    COMMENT = 23, LOGICALAND = 24, LOGICALOR = 25, LOGICALXOR = 26, LOGICALNOT = 27, 
    TRUE = 28, FALSE = 29, IF = 30, ELSE = 31, FUNCDEF = 32, VARDEF = 33, 
    BINAND = 34, BINOR = 35, BINXOR = 36, BINNOT = 37, RIGHTARROW = 38, 
    COLON = 39, STATEMENTEND = 40, WHILE = 41, RETURN = 42, INTTYPE = 43, 
    STRINGTYPE = 44, BOOLTYPE = 45, VOIDTYPE = 46, NULLVALUE = 47, DECINT = 48, 
    IDENTIFIER = 49, STRING = 50, COMMA = 51, NEWLINE = 52, TAB = 53, WHITESPACE = 54, 
    OTHER = 55
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
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignStmtContext* assignStmt();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *MINUS();
    BooleanExprContext *booleanExpr();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *DECINT();
    antlr4::tree::TerminalNode *STRING();
    FunctionCallContext *functionCall();
    antlr4::tree::TerminalNode *DIVIDE();
    antlr4::tree::TerminalNode *MULT();
    antlr4::tree::TerminalNode *PLUS();


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
    virtual size_t getRuleIndex() const override;
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
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOGICALNOT();
    std::vector<BooleanExprContext *> booleanExpr();
    BooleanExprContext* booleanExpr(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DECINT();
    antlr4::tree::TerminalNode* DECINT(size_t i);
    RelOpContext *relOp();
    CompOpContext *compOp();
    antlr4::tree::TerminalNode *TRUE();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *LOGICALOR();
    antlr4::tree::TerminalNode *LOGICALAND();
    antlr4::tree::TerminalNode *LOGICALXOR();


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
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCDEF();
    antlr4::tree::TerminalNode *IDENTIFIER();
    BlockContext *block();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    FuncArgListContext *funcArgList();
    antlr4::tree::TerminalNode *STATEMENTEND();
    antlr4::tree::TerminalNode *RIGHTARROW();
    TypeNameContext *typeName();


    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncDefContext* funcDef();

  class  FuncArgListContext : public antlr4::ParserRuleContext {
  public:
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

