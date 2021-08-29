
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2


#include "SlangGrammarVisitor.h"

#include "SlangGrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

SlangGrammarParser::SlangGrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SlangGrammarParser::~SlangGrammarParser() {
  delete _interpreter;
}

std::string SlangGrammarParser::getGrammarFileName() const {
  return "SlangGrammar.g4";
}

const std::vector<std::string>& SlangGrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SlangGrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

SlangGrammarParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::ProgramContext::EOF() {
  return getToken(SlangGrammarParser::EOF, 0);
}

tree::TerminalNode* SlangGrammarParser::ProgramContext::PROGSTART() {
  return getToken(SlangGrammarParser::PROGSTART, 0);
}

tree::TerminalNode* SlangGrammarParser::ProgramContext::PROGEND() {
  return getToken(SlangGrammarParser::PROGEND, 0);
}

SlangGrammarParser::StatementsContext* SlangGrammarParser::ProgramContext::statements() {
  return getRuleContext<SlangGrammarParser::StatementsContext>(0);
}


size_t SlangGrammarParser::ProgramContext::getRuleIndex() const {
  return SlangGrammarParser::RuleProgram;
}


antlrcpp::Any SlangGrammarParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::ProgramContext* SlangGrammarParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, SlangGrammarParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(52);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(42);
      match(SlangGrammarParser::EOF);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      match(SlangGrammarParser::PROGSTART);
      setState(44);
      match(SlangGrammarParser::PROGEND);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(45);
      match(SlangGrammarParser::PROGSTART);
      setState(46);
      statements();
      setState(47);
      match(SlangGrammarParser::PROGEND);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(49);
      statements();
      setState(50);
      match(SlangGrammarParser::EOF);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

SlangGrammarParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlangGrammarParser::StatementContext *> SlangGrammarParser::StatementsContext::statement() {
  return getRuleContexts<SlangGrammarParser::StatementContext>();
}

SlangGrammarParser::StatementContext* SlangGrammarParser::StatementsContext::statement(size_t i) {
  return getRuleContext<SlangGrammarParser::StatementContext>(i);
}

std::vector<SlangGrammarParser::CompoundStmtContext *> SlangGrammarParser::StatementsContext::compoundStmt() {
  return getRuleContexts<SlangGrammarParser::CompoundStmtContext>();
}

SlangGrammarParser::CompoundStmtContext* SlangGrammarParser::StatementsContext::compoundStmt(size_t i) {
  return getRuleContext<SlangGrammarParser::CompoundStmtContext>(i);
}

std::vector<SlangGrammarParser::FuncDefContext *> SlangGrammarParser::StatementsContext::funcDef() {
  return getRuleContexts<SlangGrammarParser::FuncDefContext>();
}

SlangGrammarParser::FuncDefContext* SlangGrammarParser::StatementsContext::funcDef(size_t i) {
  return getRuleContext<SlangGrammarParser::FuncDefContext>(i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::StatementsContext::COMMENTSL() {
  return getTokens(SlangGrammarParser::COMMENTSL);
}

tree::TerminalNode* SlangGrammarParser::StatementsContext::COMMENTSL(size_t i) {
  return getToken(SlangGrammarParser::COMMENTSL, i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::StatementsContext::COMMENTML() {
  return getTokens(SlangGrammarParser::COMMENTML);
}

tree::TerminalNode* SlangGrammarParser::StatementsContext::COMMENTML(size_t i) {
  return getToken(SlangGrammarParser::COMMENTML, i);
}


size_t SlangGrammarParser::StatementsContext::getRuleIndex() const {
  return SlangGrammarParser::RuleStatements;
}


antlrcpp::Any SlangGrammarParser::StatementsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitStatements(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::StatementsContext* SlangGrammarParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 2, SlangGrammarParser::RuleStatements);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(59);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SlangGrammarParser::LPAREN:
        case SlangGrammarParser::VARDEF:
        case SlangGrammarParser::RETURN:
        case SlangGrammarParser::IDENTIFIER: {
          setState(54);
          statement();
          break;
        }

        case SlangGrammarParser::LCURLYBR:
        case SlangGrammarParser::IF:
        case SlangGrammarParser::WHILE: {
          setState(55);
          compoundStmt();
          break;
        }

        case SlangGrammarParser::FUNCDEF: {
          setState(56);
          funcDef();
          break;
        }

        case SlangGrammarParser::COMMENTSL: {
          setState(57);
          match(SlangGrammarParser::COMMENTSL);
          break;
        }

        case SlangGrammarParser::COMMENTML: {
          setState(58);
          match(SlangGrammarParser::COMMENTML);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(61); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlangGrammarParser::LPAREN)
      | (1ULL << SlangGrammarParser::LCURLYBR)
      | (1ULL << SlangGrammarParser::COMMENTSL)
      | (1ULL << SlangGrammarParser::COMMENTML)
      | (1ULL << SlangGrammarParser::IF)
      | (1ULL << SlangGrammarParser::FUNCDEF)
      | (1ULL << SlangGrammarParser::VARDEF)
      | (1ULL << SlangGrammarParser::WHILE)
      | (1ULL << SlangGrammarParser::RETURN)
      | (1ULL << SlangGrammarParser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

SlangGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::StatementContext::STATEMENTEND() {
  return getToken(SlangGrammarParser::STATEMENTEND, 0);
}

SlangGrammarParser::DeclStmtContext* SlangGrammarParser::StatementContext::declStmt() {
  return getRuleContext<SlangGrammarParser::DeclStmtContext>(0);
}

SlangGrammarParser::AssignStmtContext* SlangGrammarParser::StatementContext::assignStmt() {
  return getRuleContext<SlangGrammarParser::AssignStmtContext>(0);
}

SlangGrammarParser::DeclAssignStmtContext* SlangGrammarParser::StatementContext::declAssignStmt() {
  return getRuleContext<SlangGrammarParser::DeclAssignStmtContext>(0);
}

SlangGrammarParser::FunctionCallContext* SlangGrammarParser::StatementContext::functionCall() {
  return getRuleContext<SlangGrammarParser::FunctionCallContext>(0);
}

SlangGrammarParser::ReturnStmtContext* SlangGrammarParser::StatementContext::returnStmt() {
  return getRuleContext<SlangGrammarParser::ReturnStmtContext>(0);
}


size_t SlangGrammarParser::StatementContext::getRuleIndex() const {
  return SlangGrammarParser::RuleStatement;
}


antlrcpp::Any SlangGrammarParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::StatementContext* SlangGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, SlangGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(63);
      declStmt();
      break;
    }

    case 2: {
      setState(64);
      assignStmt();
      break;
    }

    case 3: {
      setState(65);
      declAssignStmt();
      break;
    }

    case 4: {
      setState(66);
      functionCall();
      break;
    }

    case 5: {
      setState(67);
      returnStmt();
      break;
    }

    default:
      break;
    }
    setState(70);
    match(SlangGrammarParser::STATEMENTEND);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStmtContext ------------------------------------------------------------------

SlangGrammarParser::ReturnStmtContext::ReturnStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::ReturnStmtContext::RETURN() {
  return getToken(SlangGrammarParser::RETURN, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ReturnStmtContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}


size_t SlangGrammarParser::ReturnStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleReturnStmt;
}


antlrcpp::Any SlangGrammarParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::ReturnStmtContext* SlangGrammarParser::returnStmt() {
  ReturnStmtContext *_localctx = _tracker.createInstance<ReturnStmtContext>(_ctx, getState());
  enterRule(_localctx, 6, SlangGrammarParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(72);
      match(SlangGrammarParser::RETURN);
      setState(73);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(74);
      match(SlangGrammarParser::RETURN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignStmtContext ------------------------------------------------------------------

SlangGrammarParser::AssignStmtContext::AssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::AssignStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleAssignStmt;
}

void SlangGrammarParser::AssignStmtContext::copyFrom(AssignStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BooleanExprAssignContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanExprAssignContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprAssignContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprAssignContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

SlangGrammarParser::BooleanExprAssignContext::BooleanExprAssignContext(AssignStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprAssignContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExprAssignContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprAssignContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprAssignContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}

SlangGrammarParser::ExprAssignContext::ExprAssignContext(AssignStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprAssign(this);
  else
    return visitor->visitChildren(this);
}
SlangGrammarParser::AssignStmtContext* SlangGrammarParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 8, SlangGrammarParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(83);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AssignStmtContext *>(_tracker.createInstance<SlangGrammarParser::ExprAssignContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(77);
      match(SlangGrammarParser::IDENTIFIER);
      setState(78);
      match(SlangGrammarParser::EQUAL);
      setState(79);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AssignStmtContext *>(_tracker.createInstance<SlangGrammarParser::BooleanExprAssignContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(80);
      match(SlangGrammarParser::IDENTIFIER);
      setState(81);
      match(SlangGrammarParser::EQUAL);
      setState(82);
      booleanExpr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

SlangGrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::ExprContext::getRuleIndex() const {
  return SlangGrammarParser::RuleExpr;
}

void SlangGrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprParenContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExprParenContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprParenContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExprParenContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::ExprParenContext::ExprParenContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprPlusContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprPlusContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprPlusContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprPlusContext::PLUS() {
  return getToken(SlangGrammarParser::PLUS, 0);
}

SlangGrammarParser::ExprPlusContext::ExprPlusContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprPlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprModuloContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprModuloContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprModuloContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprModuloContext::MODULO() {
  return getToken(SlangGrammarParser::MODULO, 0);
}

SlangGrammarParser::ExprModuloContext::ExprModuloContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprModuloContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprModulo(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMinusContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprMinusContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprMinusContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprMinusContext::MINUS() {
  return getToken(SlangGrammarParser::MINUS, 0);
}

SlangGrammarParser::ExprMinusContext::ExprMinusContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStringContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExprStringContext::STRING() {
  return getToken(SlangGrammarParser::STRING, 0);
}

SlangGrammarParser::ExprStringContext::ExprStringContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprStringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::UnaryMinusContext::MINUS() {
  return getToken(SlangGrammarParser::MINUS, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::UnaryMinusContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}

SlangGrammarParser::UnaryMinusContext::UnaryMinusContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::UnaryMinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitUnaryMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExprIdentifierContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::ExprIdentifierContext::ExprIdentifierContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprDecintContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExprDecintContext::DECINT() {
  return getToken(SlangGrammarParser::DECINT, 0);
}

SlangGrammarParser::ExprDecintContext::ExprDecintContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprDecintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprDecint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprDivideContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprDivideContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprDivideContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprDivideContext::DIVIDE() {
  return getToken(SlangGrammarParser::DIVIDE, 0);
}

SlangGrammarParser::ExprDivideContext::ExprDivideContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprDivideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprDivide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprMultiplyContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprMultiplyContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprMultiplyContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprMultiplyContext::MULT() {
  return getToken(SlangGrammarParser::MULT, 0);
}

SlangGrammarParser::ExprMultiplyContext::ExprMultiplyContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprMultiplyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprMultiply(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprFunctionCallContext ------------------------------------------------------------------

SlangGrammarParser::FunctionCallContext* SlangGrammarParser::ExprFunctionCallContext::functionCall() {
  return getRuleContext<SlangGrammarParser::FunctionCallContext>(0);
}

SlangGrammarParser::ExprFunctionCallContext::ExprFunctionCallContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExprFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExprFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::expr() {
   return expr(0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SlangGrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  SlangGrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, SlangGrammarParser::RuleExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryMinusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(86);
      match(SlangGrammarParser::MINUS);
      setState(87);
      expr(11);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ExprParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(88);
      match(SlangGrammarParser::LPAREN);
      setState(89);
      expr(0);
      setState(90);
      match(SlangGrammarParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprIdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(92);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprDecintContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(93);
      match(SlangGrammarParser::DECINT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<ExprStringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(94);
      match(SlangGrammarParser::STRING);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ExprFunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(95);
      functionCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(115);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(113);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ExprDivideContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(98);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(99);
          match(SlangGrammarParser::DIVIDE);
          setState(100);
          expr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ExprMultiplyContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(101);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(102);
          match(SlangGrammarParser::MULT);
          setState(103);
          expr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ExprModuloContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(104);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(105);
          match(SlangGrammarParser::MODULO);
          setState(106);
          expr(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<ExprPlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(107);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(108);
          match(SlangGrammarParser::PLUS);
          setState(109);
          expr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<ExprMinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(110);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(111);
          match(SlangGrammarParser::MINUS);
          setState(112);
          expr(7);
          break;
        }

        default:
          break;
        } 
      }
      setState(117);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclStmtContext ------------------------------------------------------------------

SlangGrammarParser::DeclStmtContext::DeclStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::DeclStmtContext::VARDEF() {
  return getToken(SlangGrammarParser::VARDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::DeclStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::DeclStmtContext::COLON() {
  return getToken(SlangGrammarParser::COLON, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::DeclStmtContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}


size_t SlangGrammarParser::DeclStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleDeclStmt;
}


antlrcpp::Any SlangGrammarParser::DeclStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitDeclStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::DeclStmtContext* SlangGrammarParser::declStmt() {
  DeclStmtContext *_localctx = _tracker.createInstance<DeclStmtContext>(_ctx, getState());
  enterRule(_localctx, 12, SlangGrammarParser::RuleDeclStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(SlangGrammarParser::VARDEF);
    setState(119);
    match(SlangGrammarParser::IDENTIFIER);
    setState(120);
    match(SlangGrammarParser::COLON);
    setState(121);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeNameContext ------------------------------------------------------------------

SlangGrammarParser::TypeNameContext::TypeNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::TypeNameContext::INTTYPE() {
  return getToken(SlangGrammarParser::INTTYPE, 0);
}

tree::TerminalNode* SlangGrammarParser::TypeNameContext::STRINGTYPE() {
  return getToken(SlangGrammarParser::STRINGTYPE, 0);
}

tree::TerminalNode* SlangGrammarParser::TypeNameContext::VOIDTYPE() {
  return getToken(SlangGrammarParser::VOIDTYPE, 0);
}

tree::TerminalNode* SlangGrammarParser::TypeNameContext::BOOLTYPE() {
  return getToken(SlangGrammarParser::BOOLTYPE, 0);
}


size_t SlangGrammarParser::TypeNameContext::getRuleIndex() const {
  return SlangGrammarParser::RuleTypeName;
}


antlrcpp::Any SlangGrammarParser::TypeNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitTypeName(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::typeName() {
  TypeNameContext *_localctx = _tracker.createInstance<TypeNameContext>(_ctx, getState());
  enterRule(_localctx, 14, SlangGrammarParser::RuleTypeName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlangGrammarParser::INTTYPE)
      | (1ULL << SlangGrammarParser::STRINGTYPE)
      | (1ULL << SlangGrammarParser::BOOLTYPE)
      | (1ULL << SlangGrammarParser::VOIDTYPE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclAssignStmtContext ------------------------------------------------------------------

SlangGrammarParser::DeclAssignStmtContext::DeclAssignStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::DeclAssignStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleDeclAssignStmt;
}

void SlangGrammarParser::DeclAssignStmtContext::copyFrom(DeclAssignStmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BooleanDeclAssignStmtContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanDeclAssignStmtContext::VARDEF() {
  return getToken(SlangGrammarParser::VARDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanDeclAssignStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanDeclAssignStmtContext::COLON() {
  return getToken(SlangGrammarParser::COLON, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanDeclAssignStmtContext::BOOLTYPE() {
  return getToken(SlangGrammarParser::BOOLTYPE, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanDeclAssignStmtContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanDeclAssignStmtContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

SlangGrammarParser::BooleanDeclAssignStmtContext::BooleanDeclAssignStmtContext(DeclAssignStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanDeclAssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanDeclAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NormalDeclAssignStmtContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::NormalDeclAssignStmtContext::VARDEF() {
  return getToken(SlangGrammarParser::VARDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::NormalDeclAssignStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::NormalDeclAssignStmtContext::COLON() {
  return getToken(SlangGrammarParser::COLON, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::NormalDeclAssignStmtContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}

tree::TerminalNode* SlangGrammarParser::NormalDeclAssignStmtContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::NormalDeclAssignStmtContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}

SlangGrammarParser::NormalDeclAssignStmtContext::NormalDeclAssignStmtContext(DeclAssignStmtContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::NormalDeclAssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitNormalDeclAssignStmt(this);
  else
    return visitor->visitChildren(this);
}
SlangGrammarParser::DeclAssignStmtContext* SlangGrammarParser::declAssignStmt() {
  DeclAssignStmtContext *_localctx = _tracker.createInstance<DeclAssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 16, SlangGrammarParser::RuleDeclAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(138);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclAssignStmtContext *>(_tracker.createInstance<SlangGrammarParser::BooleanDeclAssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(125);
      match(SlangGrammarParser::VARDEF);
      setState(126);
      match(SlangGrammarParser::IDENTIFIER);
      setState(127);
      match(SlangGrammarParser::COLON);
      setState(128);
      match(SlangGrammarParser::BOOLTYPE);
      setState(129);
      match(SlangGrammarParser::EQUAL);
      setState(130);
      booleanExpr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclAssignStmtContext *>(_tracker.createInstance<SlangGrammarParser::NormalDeclAssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(131);
      match(SlangGrammarParser::VARDEF);
      setState(132);
      match(SlangGrammarParser::IDENTIFIER);
      setState(133);
      match(SlangGrammarParser::COLON);
      setState(134);
      typeName();
      setState(135);
      match(SlangGrammarParser::EQUAL);
      setState(136);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SlangGrammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::BlockContext::LCURLYBR() {
  return getToken(SlangGrammarParser::LCURLYBR, 0);
}

tree::TerminalNode* SlangGrammarParser::BlockContext::RCURLYBR() {
  return getToken(SlangGrammarParser::RCURLYBR, 0);
}

SlangGrammarParser::StatementsContext* SlangGrammarParser::BlockContext::statements() {
  return getRuleContext<SlangGrammarParser::StatementsContext>(0);
}


size_t SlangGrammarParser::BlockContext::getRuleIndex() const {
  return SlangGrammarParser::RuleBlock;
}


antlrcpp::Any SlangGrammarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::BlockContext* SlangGrammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 18, SlangGrammarParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(140);
      match(SlangGrammarParser::LCURLYBR);
      setState(141);
      match(SlangGrammarParser::RCURLYBR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(142);
      match(SlangGrammarParser::LCURLYBR);
      setState(143);
      statements();
      setState(144);
      match(SlangGrammarParser::RCURLYBR);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStmtContext ------------------------------------------------------------------

SlangGrammarParser::IfStmtContext::IfStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::IfStmtContext::IF() {
  return getToken(SlangGrammarParser::IF, 0);
}

tree::TerminalNode* SlangGrammarParser::IfStmtContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::IfStmtContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

tree::TerminalNode* SlangGrammarParser::IfStmtContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

std::vector<SlangGrammarParser::BlockContext *> SlangGrammarParser::IfStmtContext::block() {
  return getRuleContexts<SlangGrammarParser::BlockContext>();
}

SlangGrammarParser::BlockContext* SlangGrammarParser::IfStmtContext::block(size_t i) {
  return getRuleContext<SlangGrammarParser::BlockContext>(i);
}

tree::TerminalNode* SlangGrammarParser::IfStmtContext::ELSE() {
  return getToken(SlangGrammarParser::ELSE, 0);
}


size_t SlangGrammarParser::IfStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleIfStmt;
}


antlrcpp::Any SlangGrammarParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::IfStmtContext* SlangGrammarParser::ifStmt() {
  IfStmtContext *_localctx = _tracker.createInstance<IfStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, SlangGrammarParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(148);
      match(SlangGrammarParser::IF);
      setState(149);
      match(SlangGrammarParser::LPAREN);
      setState(150);
      booleanExpr(0);
      setState(151);
      match(SlangGrammarParser::RPAREN);
      setState(152);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(154);
      match(SlangGrammarParser::IF);
      setState(155);
      match(SlangGrammarParser::LPAREN);
      setState(156);
      booleanExpr(0);
      setState(157);
      match(SlangGrammarParser::RPAREN);
      setState(158);
      block();
      setState(159);
      match(SlangGrammarParser::ELSE);
      setState(160);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStmtContext ------------------------------------------------------------------

SlangGrammarParser::WhileStmtContext::WhileStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::WhileStmtContext::WHILE() {
  return getToken(SlangGrammarParser::WHILE, 0);
}

tree::TerminalNode* SlangGrammarParser::WhileStmtContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::WhileStmtContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

tree::TerminalNode* SlangGrammarParser::WhileStmtContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::BlockContext* SlangGrammarParser::WhileStmtContext::block() {
  return getRuleContext<SlangGrammarParser::BlockContext>(0);
}


size_t SlangGrammarParser::WhileStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleWhileStmt;
}


antlrcpp::Any SlangGrammarParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::WhileStmtContext* SlangGrammarParser::whileStmt() {
  WhileStmtContext *_localctx = _tracker.createInstance<WhileStmtContext>(_ctx, getState());
  enterRule(_localctx, 22, SlangGrammarParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(164);
    match(SlangGrammarParser::WHILE);
    setState(165);
    match(SlangGrammarParser::LPAREN);
    setState(166);
    booleanExpr(0);
    setState(167);
    match(SlangGrammarParser::RPAREN);
    setState(168);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanExprContext ------------------------------------------------------------------

SlangGrammarParser::BooleanExprContext::BooleanExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::BooleanExprContext::getRuleIndex() const {
  return SlangGrammarParser::RuleBooleanExpr;
}

void SlangGrammarParser::BooleanExprContext::copyFrom(BooleanExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BooleanExprRelOpContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::BooleanExprRelOpContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::BooleanExprRelOpContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

SlangGrammarParser::RelOpContext* SlangGrammarParser::BooleanExprRelOpContext::relOp() {
  return getRuleContext<SlangGrammarParser::RelOpContext>(0);
}

SlangGrammarParser::BooleanExprRelOpContext::BooleanExprRelOpContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprRelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprRelOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanFunctionCallContext ------------------------------------------------------------------

SlangGrammarParser::FunctionCallContext* SlangGrammarParser::BooleanFunctionCallContext::functionCall() {
  return getRuleContext<SlangGrammarParser::FunctionCallContext>(0);
}

SlangGrammarParser::BooleanFunctionCallContext::BooleanFunctionCallContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprOrContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::BooleanExprContext *> SlangGrammarParser::BooleanExprOrContext::booleanExpr() {
  return getRuleContexts<SlangGrammarParser::BooleanExprContext>();
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprOrContext::booleanExpr(size_t i) {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprOrContext::LOGICALOR() {
  return getToken(SlangGrammarParser::LOGICALOR, 0);
}

SlangGrammarParser::BooleanExprOrContext::BooleanExprOrContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprNotContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanExprNotContext::LOGICALNOT() {
  return getToken(SlangGrammarParser::LOGICALNOT, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprNotContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

SlangGrammarParser::BooleanExprNotContext::BooleanExprNotContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprCompOpContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::BooleanExprCompOpContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::BooleanExprCompOpContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

SlangGrammarParser::CompOpContext* SlangGrammarParser::BooleanExprCompOpContext::compOp() {
  return getRuleContext<SlangGrammarParser::CompOpContext>(0);
}

SlangGrammarParser::BooleanExprCompOpContext::BooleanExprCompOpContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprCompOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprCompOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprParenContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanExprParenContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprParenContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprParenContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::BooleanExprParenContext::BooleanExprParenContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprIdentifierContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanExprIdentifierContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::BooleanExprIdentifierContext::BooleanExprIdentifierContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprIdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprIdentifier(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanTrueContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanTrueContext::TRUE() {
  return getToken(SlangGrammarParser::TRUE, 0);
}

SlangGrammarParser::BooleanTrueContext::BooleanTrueContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanTrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanFalseContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::BooleanFalseContext::FALSE() {
  return getToken(SlangGrammarParser::FALSE, 0);
}

SlangGrammarParser::BooleanFalseContext::BooleanFalseContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanFalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprXorContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::BooleanExprContext *> SlangGrammarParser::BooleanExprXorContext::booleanExpr() {
  return getRuleContexts<SlangGrammarParser::BooleanExprContext>();
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprXorContext::booleanExpr(size_t i) {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprXorContext::LOGICALXOR() {
  return getToken(SlangGrammarParser::LOGICALXOR, 0);
}

SlangGrammarParser::BooleanExprXorContext::BooleanExprXorContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprXorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BooleanExprAndContext ------------------------------------------------------------------

std::vector<SlangGrammarParser::BooleanExprContext *> SlangGrammarParser::BooleanExprAndContext::booleanExpr() {
  return getRuleContexts<SlangGrammarParser::BooleanExprContext>();
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprAndContext::booleanExpr(size_t i) {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprAndContext::LOGICALAND() {
  return getToken(SlangGrammarParser::LOGICALAND, 0);
}

SlangGrammarParser::BooleanExprAndContext::BooleanExprAndContext(BooleanExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::BooleanExprAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExprAnd(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::booleanExpr() {
   return booleanExpr(0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::booleanExpr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SlangGrammarParser::BooleanExprContext *_localctx = _tracker.createInstance<BooleanExprContext>(_ctx, parentState);
  SlangGrammarParser::BooleanExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, SlangGrammarParser::RuleBooleanExpr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(189);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<BooleanExprNotContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(171);
      match(SlangGrammarParser::LOGICALNOT);
      setState(172);
      booleanExpr(11);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<BooleanExprRelOpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(173);
      expr(0);
      setState(174);
      relOp();
      setState(175);
      expr(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<BooleanExprCompOpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(177);
      expr(0);
      setState(178);
      compOp();
      setState(179);
      expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BooleanExprParenContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(181);
      match(SlangGrammarParser::LPAREN);
      setState(182);
      booleanExpr(0);
      setState(183);
      match(SlangGrammarParser::RPAREN);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<BooleanExprIdentifierContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(185);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<BooleanTrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      match(SlangGrammarParser::TRUE);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BooleanFalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(187);
      match(SlangGrammarParser::FALSE);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<BooleanFunctionCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(188);
      functionCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(202);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(200);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<BooleanExprOrContext>(_tracker.createInstance<BooleanExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleanExpr);
          setState(191);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(192);
          match(SlangGrammarParser::LOGICALOR);
          setState(193);
          booleanExpr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<BooleanExprAndContext>(_tracker.createInstance<BooleanExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleanExpr);
          setState(194);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(195);
          match(SlangGrammarParser::LOGICALAND);
          setState(196);
          booleanExpr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<BooleanExprXorContext>(_tracker.createInstance<BooleanExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleBooleanExpr);
          setState(197);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(198);
          match(SlangGrammarParser::LOGICALXOR);
          setState(199);
          booleanExpr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(204);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CompOpContext ------------------------------------------------------------------

SlangGrammarParser::CompOpContext::CompOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::CompOpContext::COMP() {
  return getToken(SlangGrammarParser::COMP, 0);
}

tree::TerminalNode* SlangGrammarParser::CompOpContext::COMPNOTEQ() {
  return getToken(SlangGrammarParser::COMPNOTEQ, 0);
}


size_t SlangGrammarParser::CompOpContext::getRuleIndex() const {
  return SlangGrammarParser::RuleCompOp;
}


antlrcpp::Any SlangGrammarParser::CompOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitCompOp(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::CompOpContext* SlangGrammarParser::compOp() {
  CompOpContext *_localctx = _tracker.createInstance<CompOpContext>(_ctx, getState());
  enterRule(_localctx, 26, SlangGrammarParser::RuleCompOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    _la = _input->LA(1);
    if (!(_la == SlangGrammarParser::COMP

    || _la == SlangGrammarParser::COMPNOTEQ)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelOpContext ------------------------------------------------------------------

SlangGrammarParser::RelOpContext::RelOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::RelOpContext::LT() {
  return getToken(SlangGrammarParser::LT, 0);
}

tree::TerminalNode* SlangGrammarParser::RelOpContext::GT() {
  return getToken(SlangGrammarParser::GT, 0);
}

tree::TerminalNode* SlangGrammarParser::RelOpContext::LTEQ() {
  return getToken(SlangGrammarParser::LTEQ, 0);
}

tree::TerminalNode* SlangGrammarParser::RelOpContext::GTEQ() {
  return getToken(SlangGrammarParser::GTEQ, 0);
}


size_t SlangGrammarParser::RelOpContext::getRuleIndex() const {
  return SlangGrammarParser::RuleRelOp;
}


antlrcpp::Any SlangGrammarParser::RelOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitRelOp(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::RelOpContext* SlangGrammarParser::relOp() {
  RelOpContext *_localctx = _tracker.createInstance<RelOpContext>(_ctx, getState());
  enterRule(_localctx, 28, SlangGrammarParser::RuleRelOp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlangGrammarParser::LT)
      | (1ULL << SlangGrammarParser::GT)
      | (1ULL << SlangGrammarParser::LTEQ)
      | (1ULL << SlangGrammarParser::GTEQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

SlangGrammarParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SlangGrammarParser::BlockContext* SlangGrammarParser::CompoundStmtContext::block() {
  return getRuleContext<SlangGrammarParser::BlockContext>(0);
}

SlangGrammarParser::IfStmtContext* SlangGrammarParser::CompoundStmtContext::ifStmt() {
  return getRuleContext<SlangGrammarParser::IfStmtContext>(0);
}

SlangGrammarParser::WhileStmtContext* SlangGrammarParser::CompoundStmtContext::whileStmt() {
  return getRuleContext<SlangGrammarParser::WhileStmtContext>(0);
}


size_t SlangGrammarParser::CompoundStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleCompoundStmt;
}


antlrcpp::Any SlangGrammarParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::CompoundStmtContext* SlangGrammarParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 30, SlangGrammarParser::RuleCompoundStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlangGrammarParser::LCURLYBR: {
        setState(209);
        block();
        break;
      }

      case SlangGrammarParser::IF: {
        setState(210);
        ifStmt();
        break;
      }

      case SlangGrammarParser::WHILE: {
        setState(211);
        whileStmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

SlangGrammarParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::FuncDefContext::getRuleIndex() const {
  return SlangGrammarParser::RuleFuncDef;
}

void SlangGrammarParser::FuncDefContext::copyFrom(FuncDefContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ImplicitRetTypeFuncDefContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ImplicitRetTypeFuncDefContext::FUNCDEF() {
  return getToken(SlangGrammarParser::FUNCDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::ImplicitRetTypeFuncDefContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::BlockContext* SlangGrammarParser::ImplicitRetTypeFuncDefContext::block() {
  return getRuleContext<SlangGrammarParser::BlockContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ImplicitRetTypeFuncDefContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::ImplicitRetTypeFuncDefContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::FuncArgListContext* SlangGrammarParser::ImplicitRetTypeFuncDefContext::funcArgList() {
  return getRuleContext<SlangGrammarParser::FuncArgListContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ImplicitRetTypeFuncDefContext::STATEMENTEND() {
  return getToken(SlangGrammarParser::STATEMENTEND, 0);
}

SlangGrammarParser::ImplicitRetTypeFuncDefContext::ImplicitRetTypeFuncDefContext(FuncDefContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ImplicitRetTypeFuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitImplicitRetTypeFuncDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExplicitRetTypeFuncDefContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::RIGHTARROW() {
  return getToken(SlangGrammarParser::RIGHTARROW, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::ExplicitRetTypeFuncDefContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::FUNCDEF() {
  return getToken(SlangGrammarParser::FUNCDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::BlockContext* SlangGrammarParser::ExplicitRetTypeFuncDefContext::block() {
  return getRuleContext<SlangGrammarParser::BlockContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::FuncArgListContext* SlangGrammarParser::ExplicitRetTypeFuncDefContext::funcArgList() {
  return getRuleContext<SlangGrammarParser::FuncArgListContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExplicitRetTypeFuncDefContext::STATEMENTEND() {
  return getToken(SlangGrammarParser::STATEMENTEND, 0);
}

SlangGrammarParser::ExplicitRetTypeFuncDefContext::ExplicitRetTypeFuncDefContext(FuncDefContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::ExplicitRetTypeFuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExplicitRetTypeFuncDef(this);
  else
    return visitor->visitChildren(this);
}
SlangGrammarParser::FuncDefContext* SlangGrammarParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 32, SlangGrammarParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(256);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FuncDefContext *>(_tracker.createInstance<SlangGrammarParser::ImplicitRetTypeFuncDefContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(229);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(214);
        match(SlangGrammarParser::FUNCDEF);
        setState(215);
        match(SlangGrammarParser::IDENTIFIER);
        setState(216);
        block();
        break;
      }

      case 2: {
        setState(217);
        match(SlangGrammarParser::FUNCDEF);
        setState(218);
        match(SlangGrammarParser::IDENTIFIER);
        setState(219);
        match(SlangGrammarParser::LPAREN);
        setState(220);
        match(SlangGrammarParser::RPAREN);
        setState(221);
        block();
        break;
      }

      case 3: {
        setState(222);
        match(SlangGrammarParser::FUNCDEF);
        setState(223);
        match(SlangGrammarParser::IDENTIFIER);
        setState(224);
        match(SlangGrammarParser::LPAREN);
        setState(225);
        funcArgList();
        setState(226);
        match(SlangGrammarParser::RPAREN);
        setState(227);
        block();
        break;
      }

      default:
        break;
      }
      setState(232);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SlangGrammarParser::STATEMENTEND) {
        setState(231);
        match(SlangGrammarParser::STATEMENTEND);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FuncDefContext *>(_tracker.createInstance<SlangGrammarParser::ExplicitRetTypeFuncDefContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(249);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
      case 1: {
        setState(234);
        match(SlangGrammarParser::FUNCDEF);
        setState(235);
        match(SlangGrammarParser::IDENTIFIER);
        setState(236);
        block();
        break;
      }

      case 2: {
        setState(237);
        match(SlangGrammarParser::FUNCDEF);
        setState(238);
        match(SlangGrammarParser::IDENTIFIER);
        setState(239);
        match(SlangGrammarParser::LPAREN);
        setState(240);
        match(SlangGrammarParser::RPAREN);
        setState(241);
        block();
        break;
      }

      case 3: {
        setState(242);
        match(SlangGrammarParser::FUNCDEF);
        setState(243);
        match(SlangGrammarParser::IDENTIFIER);
        setState(244);
        match(SlangGrammarParser::LPAREN);
        setState(245);
        funcArgList();
        setState(246);
        match(SlangGrammarParser::RPAREN);
        setState(247);
        block();
        break;
      }

      default:
        break;
      }
      setState(251);
      match(SlangGrammarParser::RIGHTARROW);
      setState(252);
      typeName();
      setState(254);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SlangGrammarParser::STATEMENTEND) {
        setState(253);
        match(SlangGrammarParser::STATEMENTEND);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncArgListContext ------------------------------------------------------------------

SlangGrammarParser::FuncArgListContext::FuncArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SlangGrammarParser::ArgParamContext *> SlangGrammarParser::FuncArgListContext::argParam() {
  return getRuleContexts<SlangGrammarParser::ArgParamContext>();
}

SlangGrammarParser::ArgParamContext* SlangGrammarParser::FuncArgListContext::argParam(size_t i) {
  return getRuleContext<SlangGrammarParser::ArgParamContext>(i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::FuncArgListContext::COMMA() {
  return getTokens(SlangGrammarParser::COMMA);
}

tree::TerminalNode* SlangGrammarParser::FuncArgListContext::COMMA(size_t i) {
  return getToken(SlangGrammarParser::COMMA, i);
}


size_t SlangGrammarParser::FuncArgListContext::getRuleIndex() const {
  return SlangGrammarParser::RuleFuncArgList;
}


antlrcpp::Any SlangGrammarParser::FuncArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncArgList(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::FuncArgListContext* SlangGrammarParser::funcArgList() {
  FuncArgListContext *_localctx = _tracker.createInstance<FuncArgListContext>(_ctx, getState());
  enterRule(_localctx, 34, SlangGrammarParser::RuleFuncArgList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(258);
      dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext = argParam();
      dynamic_cast<FuncArgListContext *>(_localctx)->args.push_back(dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(262); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(259);
                dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext = argParam();
                dynamic_cast<FuncArgListContext *>(_localctx)->args.push_back(dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext);
                setState(260);
                match(SlangGrammarParser::COMMA);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(264); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(266);
      dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext = argParam();
      dynamic_cast<FuncArgListContext *>(_localctx)->args.push_back(dynamic_cast<FuncArgListContext *>(_localctx)->argParamContext);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgParamContext ------------------------------------------------------------------

SlangGrammarParser::ArgParamContext::ArgParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::ArgParamContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::ArgParamContext::COLON() {
  return getToken(SlangGrammarParser::COLON, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::ArgParamContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}


size_t SlangGrammarParser::ArgParamContext::getRuleIndex() const {
  return SlangGrammarParser::RuleArgParam;
}


antlrcpp::Any SlangGrammarParser::ArgParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitArgParam(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::ArgParamContext* SlangGrammarParser::argParam() {
  ArgParamContext *_localctx = _tracker.createInstance<ArgParamContext>(_ctx, getState());
  enterRule(_localctx, 36, SlangGrammarParser::RuleArgParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    match(SlangGrammarParser::IDENTIFIER);
    setState(271);
    match(SlangGrammarParser::COLON);
    setState(272);
    typeName();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallArgListContext ------------------------------------------------------------------

SlangGrammarParser::CallArgListContext::CallArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SlangGrammarParser::CallArgListContext::COMMA() {
  return getTokens(SlangGrammarParser::COMMA);
}

tree::TerminalNode* SlangGrammarParser::CallArgListContext::COMMA(size_t i) {
  return getToken(SlangGrammarParser::COMMA, i);
}

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::CallArgListContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::CallArgListContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

std::vector<SlangGrammarParser::BooleanExprContext *> SlangGrammarParser::CallArgListContext::booleanExpr() {
  return getRuleContexts<SlangGrammarParser::BooleanExprContext>();
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::CallArgListContext::booleanExpr(size_t i) {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(i);
}


size_t SlangGrammarParser::CallArgListContext::getRuleIndex() const {
  return SlangGrammarParser::RuleCallArgList;
}


antlrcpp::Any SlangGrammarParser::CallArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitCallArgList(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::CallArgListContext* SlangGrammarParser::callArgList() {
  CallArgListContext *_localctx = _tracker.createInstance<CallArgListContext>(_ctx, getState());
  enterRule(_localctx, 38, SlangGrammarParser::RuleCallArgList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(277);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(274);
      dynamic_cast<CallArgListContext *>(_localctx)->exprContext = expr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->callParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->exprContext);
      setState(275);
      match(SlangGrammarParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(282);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(279);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext = booleanExpr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanCallParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext);
      setState(280);
      match(SlangGrammarParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(287);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      setState(284);
      dynamic_cast<CallArgListContext *>(_localctx)->exprContext = expr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->callParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->exprContext);
      setState(285);
      match(SlangGrammarParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(292);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      setState(289);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext = booleanExpr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanCallParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext);
      setState(290);
      match(SlangGrammarParser::COMMA);
      break;
    }

    default:
      break;
    }
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      setState(294);
      dynamic_cast<CallArgListContext *>(_localctx)->exprContext = expr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->callParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->exprContext);
      break;
    }

    case 2: {
      setState(295);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext = booleanExpr(0);
      dynamic_cast<CallArgListContext *>(_localctx)->booleanCallParams.push_back(dynamic_cast<CallArgListContext *>(_localctx)->booleanExprContext);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

SlangGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SlangGrammarParser::FunctionCallContext::getRuleIndex() const {
  return SlangGrammarParser::RuleFunctionCall;
}

void SlangGrammarParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FunctionCallWithArgsContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::FunctionCallWithArgsContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

SlangGrammarParser::CallArgListContext* SlangGrammarParser::FunctionCallWithArgsContext::callArgList() {
  return getRuleContext<SlangGrammarParser::CallArgListContext>(0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallWithArgsContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallWithArgsContext::RIGHTARROW() {
  return getToken(SlangGrammarParser::RIGHTARROW, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallWithArgsContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::FunctionCallWithArgsContext::FunctionCallWithArgsContext(FunctionCallContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::FunctionCallWithArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCallWithArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallNoArgsContext ------------------------------------------------------------------

tree::TerminalNode* SlangGrammarParser::FunctionCallNoArgsContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallNoArgsContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallNoArgsContext::RIGHTARROW() {
  return getToken(SlangGrammarParser::RIGHTARROW, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallNoArgsContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::FunctionCallNoArgsContext::FunctionCallNoArgsContext(FunctionCallContext *ctx) { copyFrom(ctx); }


antlrcpp::Any SlangGrammarParser::FunctionCallNoArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCallNoArgs(this);
  else
    return visitor->visitChildren(this);
}
SlangGrammarParser::FunctionCallContext* SlangGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 40, SlangGrammarParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<SlangGrammarParser::FunctionCallNoArgsContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(298);
      match(SlangGrammarParser::LPAREN);
      setState(299);
      match(SlangGrammarParser::RPAREN);
      setState(300);
      match(SlangGrammarParser::RIGHTARROW);
      setState(301);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<SlangGrammarParser::FunctionCallWithArgsContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(302);
      match(SlangGrammarParser::LPAREN);
      setState(303);
      callArgList();
      setState(304);
      match(SlangGrammarParser::RPAREN);
      setState(305);
      match(SlangGrammarParser::RIGHTARROW);
      setState(306);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SlangGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 5: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 12: return booleanExprSempred(dynamic_cast<BooleanExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SlangGrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

bool SlangGrammarParser::booleanExprSempred(BooleanExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 10);
    case 6: return precpred(_ctx, 9);
    case 7: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> SlangGrammarParser::_decisionToDFA;
atn::PredictionContextCache SlangGrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SlangGrammarParser::_atn;
std::vector<uint16_t> SlangGrammarParser::_serializedATN;

std::vector<std::string> SlangGrammarParser::_ruleNames = {
  "program", "statements", "statement", "returnStmt", "assignStmt", "expr", 
  "declStmt", "typeName", "declAssignStmt", "block", "ifStmt", "whileStmt", 
  "booleanExpr", "compOp", "relOp", "compoundStmt", "funcDef", "funcArgList", 
  "argParam", "callArgList", "functionCall"
};

std::vector<std::string> SlangGrammarParser::_literalNames = {
  "", "'<SLANG>'", "'</SLANG>'", "'('", "')'", "'{'", "'}'", "'['", "']'", 
  "'+'", "'-'", "'/'", "'*'", "'%'", "'='", "'<'", "'>'", "'<='", "'>='", 
  "'=='", "'!='", "'\\\\*'", "'*\\\\'", "", "", "", "", "", "", "", "", 
  "", "'if'", "'else'", "'introducing'", "", "'&'", "'|'", "'|!'", "'!'", 
  "'->'", "':'", "';'", "'while'", "'return'", "'int'", "'string'", "'booly'", 
  "'void'", "'null'", "", "", "", "','", "", "", "' '"
};

std::vector<std::string> SlangGrammarParser::_symbolicNames = {
  "", "PROGSTART", "PROGEND", "LPAREN", "RPAREN", "LCURLYBR", "RCURLYBR", 
  "LSQBR", "RSQBR", "PLUS", "MINUS", "DIVIDE", "MULT", "MODULO", "EQUAL", 
  "LT", "GT", "LTEQ", "GTEQ", "COMP", "COMPNOTEQ", "MARKERCOMMULTILINESTART", 
  "MARKERCOMMULTILINEEND", "MARKERCOMSINGLELINE", "COMMENTSL", "COMMENTML", 
  "LOGICALAND", "LOGICALOR", "LOGICALXOR", "LOGICALNOT", "TRUE", "FALSE", 
  "IF", "ELSE", "FUNCDEF", "VARDEF", "BINAND", "BINOR", "BINXOR", "BINNOT", 
  "RIGHTARROW", "COLON", "STATEMENTEND", "WHILE", "RETURN", "INTTYPE", "STRINGTYPE", 
  "BOOLTYPE", "VOIDTYPE", "NULLVALUE", "DECINT", "IDENTIFIER", "STRING", 
  "COMMA", "NEWLINE", "TAB", "WHITESPACE", "OTHER"
};

dfa::Vocabulary SlangGrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SlangGrammarParser::_tokenNames;

SlangGrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x3b, 0x139, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x37, 0xa, 0x2, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x3e, 0xa, 0x3, 0xd, 
       0x3, 0xe, 0x3, 0x3f, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x5, 0x4, 0x47, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x5, 0x5, 0x4e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x56, 0xa, 0x6, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x63, 0xa, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x74, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 
       0x77, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x8d, 0xa, 0xa, 0x3, 0xb, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x95, 0xa, 0xb, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x3, 0xc, 0x5, 0xc, 0xa5, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xc0, 0xa, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x7, 0xe, 0xcb, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xce, 0xb, 
       0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
       0x3, 0x11, 0x5, 0x11, 0xd7, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x5, 0x12, 0xe8, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0xeb, 0xa, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xfc, 0xa, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x101, 0xa, 0x12, 0x5, 
       0x12, 0x103, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x6, 0x13, 0x109, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x10a, 0x3, 0x13, 
       0x3, 0x13, 0x5, 0x13, 0x10f, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x118, 
       0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x11d, 0xa, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x122, 0xa, 0x15, 
       0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x127, 0xa, 0x15, 0x3, 
       0x15, 0x3, 0x15, 0x5, 0x15, 0x12b, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x137, 0xa, 0x16, 0x3, 0x16, 0x2, 
       0x4, 0xc, 0x1a, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
       0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
       0x2a, 0x2, 0x5, 0x3, 0x2, 0x2f, 0x32, 0x3, 0x2, 0x15, 0x16, 0x3, 
       0x2, 0x11, 0x14, 0x2, 0x159, 0x2, 0x36, 0x3, 0x2, 0x2, 0x2, 0x4, 
       0x3d, 0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4d, 
       0x3, 0x2, 0x2, 0x2, 0xa, 0x55, 0x3, 0x2, 0x2, 0x2, 0xc, 0x62, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0x78, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7d, 0x3, 0x2, 
       0x2, 0x2, 0x12, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x94, 0x3, 0x2, 0x2, 
       0x2, 0x16, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa6, 0x3, 0x2, 0x2, 0x2, 
       0x1a, 0xbf, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x1e, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0x20, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x22, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x26, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0x117, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x136, 
       0x3, 0x2, 0x2, 0x2, 0x2c, 0x37, 0x7, 0x2, 0x2, 0x3, 0x2d, 0x2e, 0x7, 
       0x3, 0x2, 0x2, 0x2e, 0x37, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x3, 
       0x2, 0x2, 0x30, 0x31, 0x5, 0x4, 0x3, 0x2, 0x31, 0x32, 0x7, 0x4, 0x2, 
       0x2, 0x32, 0x37, 0x3, 0x2, 0x2, 0x2, 0x33, 0x34, 0x5, 0x4, 0x3, 0x2, 
       0x34, 0x35, 0x7, 0x2, 0x2, 0x3, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 
       0x2c, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x36, 0x33, 0x3, 0x2, 0x2, 0x2, 0x37, 0x3, 0x3, 
       0x2, 0x2, 0x2, 0x38, 0x3e, 0x5, 0x6, 0x4, 0x2, 0x39, 0x3e, 0x5, 0x20, 
       0x11, 0x2, 0x3a, 0x3e, 0x5, 0x22, 0x12, 0x2, 0x3b, 0x3e, 0x7, 0x1a, 
       0x2, 0x2, 0x3c, 0x3e, 0x7, 0x1b, 0x2, 0x2, 0x3d, 0x38, 0x3, 0x2, 
       0x2, 0x2, 0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3a, 0x3, 0x2, 0x2, 
       0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 
       0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
       0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x5, 0x3, 0x2, 0x2, 0x2, 0x41, 0x47, 
       0x5, 0xe, 0x8, 0x2, 0x42, 0x47, 0x5, 0xa, 0x6, 0x2, 0x43, 0x47, 0x5, 
       0x12, 0xa, 0x2, 0x44, 0x47, 0x5, 0x2a, 0x16, 0x2, 0x45, 0x47, 0x5, 
       0x8, 0x5, 0x2, 0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 
       0x2, 0x2, 0x46, 0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 
       0x2, 0x46, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 
       0x48, 0x49, 0x7, 0x2c, 0x2, 0x2, 0x49, 0x7, 0x3, 0x2, 0x2, 0x2, 0x4a, 
       0x4b, 0x7, 0x2e, 0x2, 0x2, 0x4b, 0x4e, 0x5, 0xc, 0x7, 0x2, 0x4c, 
       0x4e, 0x7, 0x2e, 0x2, 0x2, 0x4d, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 
       0x4c, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 
       0x7, 0x35, 0x2, 0x2, 0x50, 0x51, 0x7, 0x10, 0x2, 0x2, 0x51, 0x56, 
       0x5, 0xc, 0x7, 0x2, 0x52, 0x53, 0x7, 0x35, 0x2, 0x2, 0x53, 0x54, 
       0x7, 0x10, 0x2, 0x2, 0x54, 0x56, 0x5, 0x1a, 0xe, 0x2, 0x55, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x55, 0x52, 0x3, 0x2, 0x2, 0x2, 0x56, 0xb, 0x3, 
       0x2, 0x2, 0x2, 0x57, 0x58, 0x8, 0x7, 0x1, 0x2, 0x58, 0x59, 0x7, 0xc, 
       0x2, 0x2, 0x59, 0x63, 0x5, 0xc, 0x7, 0xd, 0x5a, 0x5b, 0x7, 0x5, 0x2, 
       0x2, 0x5b, 0x5c, 0x5, 0xc, 0x7, 0x2, 0x5c, 0x5d, 0x7, 0x6, 0x2, 0x2, 
       0x5d, 0x63, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x63, 0x7, 0x35, 0x2, 0x2, 
       0x5f, 0x63, 0x7, 0x34, 0x2, 0x2, 0x60, 0x63, 0x7, 0x36, 0x2, 0x2, 
       0x61, 0x63, 0x5, 0x2a, 0x16, 0x2, 0x62, 0x57, 0x3, 0x2, 0x2, 0x2, 
       0x62, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 
       0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x63, 0x75, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0xc, 
       0xc, 0x2, 0x2, 0x65, 0x66, 0x7, 0xd, 0x2, 0x2, 0x66, 0x74, 0x5, 0xc, 
       0x7, 0xd, 0x67, 0x68, 0xc, 0xb, 0x2, 0x2, 0x68, 0x69, 0x7, 0xe, 0x2, 
       0x2, 0x69, 0x74, 0x5, 0xc, 0x7, 0xc, 0x6a, 0x6b, 0xc, 0xa, 0x2, 0x2, 
       0x6b, 0x6c, 0x7, 0xf, 0x2, 0x2, 0x6c, 0x74, 0x5, 0xc, 0x7, 0xb, 0x6d, 
       0x6e, 0xc, 0x9, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0xb, 0x2, 0x2, 0x6f, 0x74, 
       0x5, 0xc, 0x7, 0xa, 0x70, 0x71, 0xc, 0x8, 0x2, 0x2, 0x71, 0x72, 0x7, 
       0xc, 0x2, 0x2, 0x72, 0x74, 0x5, 0xc, 0x7, 0x9, 0x73, 0x64, 0x3, 0x2, 
       0x2, 0x2, 0x73, 0x67, 0x3, 0x2, 0x2, 0x2, 0x73, 0x6a, 0x3, 0x2, 0x2, 
       0x2, 0x73, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x73, 0x70, 0x3, 0x2, 0x2, 0x2, 
       0x74, 0x77, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 
       0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 0xd, 0x3, 0x2, 0x2, 0x2, 0x77, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x25, 0x2, 0x2, 0x79, 0x7a, 
       0x7, 0x35, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x2b, 0x2, 0x2, 0x7b, 0x7c, 
       0x5, 0x10, 0x9, 0x2, 0x7c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x9, 
       0x2, 0x2, 0x2, 0x7e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x25, 
       0x2, 0x2, 0x80, 0x81, 0x7, 0x35, 0x2, 0x2, 0x81, 0x82, 0x7, 0x2b, 
       0x2, 0x2, 0x82, 0x83, 0x7, 0x31, 0x2, 0x2, 0x83, 0x84, 0x7, 0x10, 
       0x2, 0x2, 0x84, 0x8d, 0x5, 0x1a, 0xe, 0x2, 0x85, 0x86, 0x7, 0x25, 
       0x2, 0x2, 0x86, 0x87, 0x7, 0x35, 0x2, 0x2, 0x87, 0x88, 0x7, 0x2b, 
       0x2, 0x2, 0x88, 0x89, 0x5, 0x10, 0x9, 0x2, 0x89, 0x8a, 0x7, 0x10, 
       0x2, 0x2, 0x8a, 0x8b, 0x5, 0xc, 0x7, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 
       0x2, 0x8c, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x85, 0x3, 0x2, 0x2, 0x2, 
       0x8d, 0x13, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x7, 0x2, 0x2, 0x8f, 
       0x95, 0x7, 0x8, 0x2, 0x2, 0x90, 0x91, 0x7, 0x7, 0x2, 0x2, 0x91, 0x92, 
       0x5, 0x4, 0x3, 0x2, 0x92, 0x93, 0x7, 0x8, 0x2, 0x2, 0x93, 0x95, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x94, 0x90, 0x3, 0x2, 
       0x2, 0x2, 0x95, 0x15, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0x22, 
       0x2, 0x2, 0x97, 0x98, 0x7, 0x5, 0x2, 0x2, 0x98, 0x99, 0x5, 0x1a, 
       0xe, 0x2, 0x99, 0x9a, 0x7, 0x6, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x14, 
       0xb, 0x2, 0x9b, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x22, 
       0x2, 0x2, 0x9d, 0x9e, 0x7, 0x5, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x1a, 
       0xe, 0x2, 0x9f, 0xa0, 0x7, 0x6, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x14, 
       0xb, 0x2, 0xa1, 0xa2, 0x7, 0x23, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x14, 
       0xb, 0x2, 0xa3, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x96, 0x3, 0x2, 0x2, 
       0x2, 0xa4, 0x9c, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x17, 0x3, 0x2, 0x2, 0x2, 
       0xa6, 0xa7, 0x7, 0x2d, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x5, 0x2, 0x2, 
       0xa8, 0xa9, 0x5, 0x1a, 0xe, 0x2, 0xa9, 0xaa, 0x7, 0x6, 0x2, 0x2, 
       0xaa, 0xab, 0x5, 0x14, 0xb, 0x2, 0xab, 0x19, 0x3, 0x2, 0x2, 0x2, 
       0xac, 0xad, 0x8, 0xe, 0x1, 0x2, 0xad, 0xae, 0x7, 0x1f, 0x2, 0x2, 
       0xae, 0xc0, 0x5, 0x1a, 0xe, 0xd, 0xaf, 0xb0, 0x5, 0xc, 0x7, 0x2, 
       0xb0, 0xb1, 0x5, 0x1e, 0x10, 0x2, 0xb1, 0xb2, 0x5, 0xc, 0x7, 0x2, 
       0xb2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb4, 
       0xb5, 0x5, 0x1c, 0xf, 0x2, 0xb5, 0xb6, 0x5, 0xc, 0x7, 0x2, 0xb6, 
       0xc0, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x7, 0x5, 0x2, 0x2, 0xb8, 0xb9, 
       0x5, 0x1a, 0xe, 0x2, 0xb9, 0xba, 0x7, 0x6, 0x2, 0x2, 0xba, 0xc0, 
       0x3, 0x2, 0x2, 0x2, 0xbb, 0xc0, 0x7, 0x35, 0x2, 0x2, 0xbc, 0xc0, 
       0x7, 0x20, 0x2, 0x2, 0xbd, 0xc0, 0x7, 0x21, 0x2, 0x2, 0xbe, 0xc0, 
       0x5, 0x2a, 0x16, 0x2, 0xbf, 0xac, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0xbf, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xb7, 0x3, 
       0x2, 0x2, 0x2, 0xbf, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbc, 0x3, 0x2, 
       0x2, 0x2, 0xbf, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 
       0x2, 0xc0, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0xc, 0xc, 0x2, 0x2, 
       0xc2, 0xc3, 0x7, 0x1d, 0x2, 0x2, 0xc3, 0xcb, 0x5, 0x1a, 0xe, 0xd, 
       0xc4, 0xc5, 0xc, 0xb, 0x2, 0x2, 0xc5, 0xc6, 0x7, 0x1c, 0x2, 0x2, 
       0xc6, 0xcb, 0x5, 0x1a, 0xe, 0xc, 0xc7, 0xc8, 0xc, 0xa, 0x2, 0x2, 
       0xc8, 0xc9, 0x7, 0x1e, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x1a, 0xe, 0xb, 
       0xca, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xca, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 
       0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x1b, 0x3, 
       0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x9, 0x3, 
       0x2, 0x2, 0xd0, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x9, 0x4, 0x2, 
       0x2, 0xd2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd7, 0x5, 0x14, 0xb, 
       0x2, 0xd4, 0xd7, 0x5, 0x16, 0xc, 0x2, 0xd5, 0xd7, 0x5, 0x18, 0xd, 
       0x2, 0xd6, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd8, 
       0xd9, 0x7, 0x24, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x35, 0x2, 0x2, 0xda, 
       0xe8, 0x5, 0x14, 0xb, 0x2, 0xdb, 0xdc, 0x7, 0x24, 0x2, 0x2, 0xdc, 
       0xdd, 0x7, 0x35, 0x2, 0x2, 0xdd, 0xde, 0x7, 0x5, 0x2, 0x2, 0xde, 
       0xdf, 0x7, 0x6, 0x2, 0x2, 0xdf, 0xe8, 0x5, 0x14, 0xb, 0x2, 0xe0, 
       0xe1, 0x7, 0x24, 0x2, 0x2, 0xe1, 0xe2, 0x7, 0x35, 0x2, 0x2, 0xe2, 
       0xe3, 0x7, 0x5, 0x2, 0x2, 0xe3, 0xe4, 0x5, 0x24, 0x13, 0x2, 0xe4, 
       0xe5, 0x7, 0x6, 0x2, 0x2, 0xe5, 0xe6, 0x5, 0x14, 0xb, 0x2, 0xe6, 
       0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xdb, 
       0x3, 0x2, 0x2, 0x2, 0xe7, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xea, 0x3, 
       0x2, 0x2, 0x2, 0xe9, 0xeb, 0x7, 0x2c, 0x2, 0x2, 0xea, 0xe9, 0x3, 
       0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0x103, 0x3, 
       0x2, 0x2, 0x2, 0xec, 0xed, 0x7, 0x24, 0x2, 0x2, 0xed, 0xee, 0x7, 
       0x35, 0x2, 0x2, 0xee, 0xfc, 0x5, 0x14, 0xb, 0x2, 0xef, 0xf0, 0x7, 
       0x24, 0x2, 0x2, 0xf0, 0xf1, 0x7, 0x35, 0x2, 0x2, 0xf1, 0xf2, 0x7, 
       0x5, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x6, 0x2, 0x2, 0xf3, 0xfc, 0x5, 0x14, 
       0xb, 0x2, 0xf4, 0xf5, 0x7, 0x24, 0x2, 0x2, 0xf5, 0xf6, 0x7, 0x35, 
       0x2, 0x2, 0xf6, 0xf7, 0x7, 0x5, 0x2, 0x2, 0xf7, 0xf8, 0x5, 0x24, 
       0x13, 0x2, 0xf8, 0xf9, 0x7, 0x6, 0x2, 0x2, 0xf9, 0xfa, 0x5, 0x14, 
       0xb, 0x2, 0xfa, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xec, 0x3, 0x2, 0x2, 
       0x2, 0xfb, 0xef, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf4, 0x3, 0x2, 0x2, 0x2, 
       0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x2a, 0x2, 0x2, 
       0xfe, 0x100, 0x5, 0x10, 0x9, 0x2, 0xff, 0x101, 0x7, 0x2c, 0x2, 0x2, 
       0x100, 0xff, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 
       0x101, 0x103, 0x3, 0x2, 0x2, 0x2, 0x102, 0xe7, 0x3, 0x2, 0x2, 0x2, 
       0x102, 0xfb, 0x3, 0x2, 0x2, 0x2, 0x103, 0x23, 0x3, 0x2, 0x2, 0x2, 
       0x104, 0x10f, 0x5, 0x26, 0x14, 0x2, 0x105, 0x106, 0x5, 0x26, 0x14, 
       0x2, 0x106, 0x107, 0x7, 0x37, 0x2, 0x2, 0x107, 0x109, 0x3, 0x2, 0x2, 
       0x2, 0x108, 0x105, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 
       0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 
       0x2, 0x10b, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x26, 0x14, 
       0x2, 0x10d, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x104, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x25, 0x3, 0x2, 0x2, 
       0x2, 0x110, 0x111, 0x7, 0x35, 0x2, 0x2, 0x111, 0x112, 0x7, 0x2b, 
       0x2, 0x2, 0x112, 0x113, 0x5, 0x10, 0x9, 0x2, 0x113, 0x27, 0x3, 0x2, 
       0x2, 0x2, 0x114, 0x115, 0x5, 0xc, 0x7, 0x2, 0x115, 0x116, 0x7, 0x37, 
       0x2, 0x2, 0x116, 0x118, 0x3, 0x2, 0x2, 0x2, 0x117, 0x114, 0x3, 0x2, 
       0x2, 0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x11c, 0x3, 0x2, 
       0x2, 0x2, 0x119, 0x11a, 0x5, 0x1a, 0xe, 0x2, 0x11a, 0x11b, 0x7, 0x37, 
       0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x119, 0x3, 0x2, 
       0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x121, 0x3, 0x2, 
       0x2, 0x2, 0x11e, 0x11f, 0x5, 0xc, 0x7, 0x2, 0x11f, 0x120, 0x7, 0x37, 
       0x2, 0x2, 0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 0x121, 0x11e, 0x3, 0x2, 
       0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 0x2, 0x2, 0x122, 0x126, 0x3, 0x2, 
       0x2, 0x2, 0x123, 0x124, 0x5, 0x1a, 0xe, 0x2, 0x124, 0x125, 0x7, 0x37, 
       0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 0x126, 0x123, 0x3, 0x2, 
       0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x12a, 0x3, 0x2, 
       0x2, 0x2, 0x128, 0x12b, 0x5, 0xc, 0x7, 0x2, 0x129, 0x12b, 0x5, 0x1a, 
       0xe, 0x2, 0x12a, 0x128, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x129, 0x3, 0x2, 
       0x2, 0x2, 0x12b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x7, 0x5, 
       0x2, 0x2, 0x12d, 0x12e, 0x7, 0x6, 0x2, 0x2, 0x12e, 0x12f, 0x7, 0x2a, 
       0x2, 0x2, 0x12f, 0x137, 0x7, 0x35, 0x2, 0x2, 0x130, 0x131, 0x7, 0x5, 
       0x2, 0x2, 0x131, 0x132, 0x5, 0x28, 0x15, 0x2, 0x132, 0x133, 0x7, 
       0x6, 0x2, 0x2, 0x133, 0x134, 0x7, 0x2a, 0x2, 0x2, 0x134, 0x135, 0x7, 
       0x35, 0x2, 0x2, 0x135, 0x137, 0x3, 0x2, 0x2, 0x2, 0x136, 0x12c, 0x3, 
       0x2, 0x2, 0x2, 0x136, 0x130, 0x3, 0x2, 0x2, 0x2, 0x137, 0x2b, 0x3, 
       0x2, 0x2, 0x2, 0x1f, 0x36, 0x3d, 0x3f, 0x46, 0x4d, 0x55, 0x62, 0x73, 
       0x75, 0x8c, 0x94, 0xa4, 0xbf, 0xca, 0xcc, 0xd6, 0xe7, 0xea, 0xfb, 
       0x100, 0x102, 0x10a, 0x10e, 0x117, 0x11c, 0x121, 0x126, 0x12a, 0x136, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SlangGrammarParser::Initializer SlangGrammarParser::_init;
