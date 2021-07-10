
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
    setState(54);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      match(SlangGrammarParser::EOF);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      match(SlangGrammarParser::PROGSTART);
      setState(46);
      match(SlangGrammarParser::PROGEND);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(47);
      match(SlangGrammarParser::PROGSTART);
      setState(48);
      statements();
      setState(49);
      match(SlangGrammarParser::PROGEND);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(51);
      statements();
      setState(52);
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

std::vector<SlangGrammarParser::CommentMultilineContext *> SlangGrammarParser::StatementsContext::commentMultiline() {
  return getRuleContexts<SlangGrammarParser::CommentMultilineContext>();
}

SlangGrammarParser::CommentMultilineContext* SlangGrammarParser::StatementsContext::commentMultiline(size_t i) {
  return getRuleContext<SlangGrammarParser::CommentMultilineContext>(i);
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
    setState(60); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(60);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SlangGrammarParser::LPAREN:
        case SlangGrammarParser::VARDEF:
        case SlangGrammarParser::RETURN:
        case SlangGrammarParser::IDENTIFIER: {
          setState(56);
          statement();
          break;
        }

        case SlangGrammarParser::LCURLYBR:
        case SlangGrammarParser::IF:
        case SlangGrammarParser::WHILE: {
          setState(57);
          compoundStmt();
          break;
        }

        case SlangGrammarParser::FUNCDEF: {
          setState(58);
          funcDef();
          break;
        }

        case SlangGrammarParser::MARKERCOMMULTILINESTART: {
          setState(59);
          commentMultiline();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(62); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SlangGrammarParser::LPAREN)
      | (1ULL << SlangGrammarParser::LCURLYBR)
      | (1ULL << SlangGrammarParser::MARKERCOMMULTILINESTART)
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

//----------------- CommentMultilineContext ------------------------------------------------------------------

SlangGrammarParser::CommentMultilineContext::CommentMultilineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::CommentMultilineContext::MARKERCOMMULTILINESTART() {
  return getToken(SlangGrammarParser::MARKERCOMMULTILINESTART, 0);
}

tree::TerminalNode* SlangGrammarParser::CommentMultilineContext::MARKERCOMMULTILINEEND() {
  return getToken(SlangGrammarParser::MARKERCOMMULTILINEEND, 0);
}


size_t SlangGrammarParser::CommentMultilineContext::getRuleIndex() const {
  return SlangGrammarParser::RuleCommentMultiline;
}


antlrcpp::Any SlangGrammarParser::CommentMultilineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitCommentMultiline(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::CommentMultilineContext* SlangGrammarParser::commentMultiline() {
  CommentMultilineContext *_localctx = _tracker.createInstance<CommentMultilineContext>(_ctx, getState());
  enterRule(_localctx, 4, SlangGrammarParser::RuleCommentMultiline);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(SlangGrammarParser::MARKERCOMMULTILINESTART);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(65);
        matchWildcard(); 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(71);
    match(SlangGrammarParser::MARKERCOMMULTILINEEND);
   
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
  enterRule(_localctx, 6, SlangGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(73);
      declStmt();
      break;
    }

    case 2: {
      setState(74);
      assignStmt();
      break;
    }

    case 3: {
      setState(75);
      declAssignStmt();
      break;
    }

    case 4: {
      setState(76);
      functionCall();
      break;
    }

    case 5: {
      setState(77);
      returnStmt();
      break;
    }

    default:
      break;
    }
    setState(80);
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
  enterRule(_localctx, 8, SlangGrammarParser::RuleReturnStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(85);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      match(SlangGrammarParser::RETURN);
      setState(83);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
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

tree::TerminalNode* SlangGrammarParser::AssignStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::AssignStmtContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::AssignStmtContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}


size_t SlangGrammarParser::AssignStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleAssignStmt;
}


antlrcpp::Any SlangGrammarParser::AssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::AssignStmtContext* SlangGrammarParser::assignStmt() {
  AssignStmtContext *_localctx = _tracker.createInstance<AssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 10, SlangGrammarParser::RuleAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(SlangGrammarParser::IDENTIFIER);
    setState(88);
    match(SlangGrammarParser::EQUAL);
    setState(89);
    expr(0);
   
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

tree::TerminalNode* SlangGrammarParser::ExprContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::ExprContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::ExprContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::MINUS() {
  return getToken(SlangGrammarParser::MINUS, 0);
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::ExprContext::booleanExpr() {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::DECINT() {
  return getToken(SlangGrammarParser::DECINT, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::STRING() {
  return getToken(SlangGrammarParser::STRING, 0);
}

SlangGrammarParser::FunctionCallContext* SlangGrammarParser::ExprContext::functionCall() {
  return getRuleContext<SlangGrammarParser::FunctionCallContext>(0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::DIVIDE() {
  return getToken(SlangGrammarParser::DIVIDE, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::MULT() {
  return getToken(SlangGrammarParser::MULT, 0);
}

tree::TerminalNode* SlangGrammarParser::ExprContext::PLUS() {
  return getToken(SlangGrammarParser::PLUS, 0);
}


size_t SlangGrammarParser::ExprContext::getRuleIndex() const {
  return SlangGrammarParser::RuleExpr;
}


antlrcpp::Any SlangGrammarParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
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
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, SlangGrammarParser::RuleExpr, precedence);

    

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
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      setState(92);
      match(SlangGrammarParser::LPAREN);
      setState(93);
      expr(0);
      setState(94);
      match(SlangGrammarParser::RPAREN);
      break;
    }

    case 2: {
      setState(96);
      match(SlangGrammarParser::MINUS);
      setState(97);
      expr(6);
      break;
    }

    case 3: {
      setState(98);
      booleanExpr(0);
      break;
    }

    case 4: {
      setState(99);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    case 5: {
      setState(100);
      match(SlangGrammarParser::DECINT);
      break;
    }

    case 6: {
      setState(101);
      match(SlangGrammarParser::STRING);
      break;
    }

    case 7: {
      setState(102);
      functionCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(117);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(105);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(106);
          match(SlangGrammarParser::DIVIDE);
          setState(107);
          expr(12);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(108);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(109);
          match(SlangGrammarParser::MULT);
          setState(110);
          expr(11);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(111);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(112);
          match(SlangGrammarParser::PLUS);
          setState(113);
          expr(10);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(114);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(115);
          match(SlangGrammarParser::MINUS);
          setState(116);
          expr(9);
          break;
        }

        default:
          break;
        } 
      }
      setState(121);
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
  enterRule(_localctx, 14, SlangGrammarParser::RuleDeclStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(SlangGrammarParser::VARDEF);
    setState(123);
    match(SlangGrammarParser::IDENTIFIER);
    setState(124);
    match(SlangGrammarParser::COLON);
    setState(125);
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
  enterRule(_localctx, 16, SlangGrammarParser::RuleTypeName);
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
    setState(127);
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

tree::TerminalNode* SlangGrammarParser::DeclAssignStmtContext::VARDEF() {
  return getToken(SlangGrammarParser::VARDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::DeclAssignStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

tree::TerminalNode* SlangGrammarParser::DeclAssignStmtContext::COLON() {
  return getToken(SlangGrammarParser::COLON, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::DeclAssignStmtContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}

tree::TerminalNode* SlangGrammarParser::DeclAssignStmtContext::EQUAL() {
  return getToken(SlangGrammarParser::EQUAL, 0);
}

SlangGrammarParser::ExprContext* SlangGrammarParser::DeclAssignStmtContext::expr() {
  return getRuleContext<SlangGrammarParser::ExprContext>(0);
}


size_t SlangGrammarParser::DeclAssignStmtContext::getRuleIndex() const {
  return SlangGrammarParser::RuleDeclAssignStmt;
}


antlrcpp::Any SlangGrammarParser::DeclAssignStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitDeclAssignStmt(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::DeclAssignStmtContext* SlangGrammarParser::declAssignStmt() {
  DeclAssignStmtContext *_localctx = _tracker.createInstance<DeclAssignStmtContext>(_ctx, getState());
  enterRule(_localctx, 18, SlangGrammarParser::RuleDeclAssignStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(SlangGrammarParser::VARDEF);
    setState(130);
    match(SlangGrammarParser::IDENTIFIER);
    setState(131);
    match(SlangGrammarParser::COLON);
    setState(132);
    typeName();
    setState(133);
    match(SlangGrammarParser::EQUAL);
    setState(134);
    expr(0);
   
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
  enterRule(_localctx, 20, SlangGrammarParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(136);
      match(SlangGrammarParser::LCURLYBR);
      setState(137);
      match(SlangGrammarParser::RCURLYBR);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(138);
      match(SlangGrammarParser::LCURLYBR);
      setState(139);
      statements();
      setState(140);
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

tree::TerminalNode* SlangGrammarParser::IfStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 22, SlangGrammarParser::RuleIfStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(171);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(144);
      match(SlangGrammarParser::IF);
      setState(145);
      match(SlangGrammarParser::LPAREN);
      setState(146);
      booleanExpr(0);
      setState(147);
      match(SlangGrammarParser::RPAREN);
      setState(148);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(150);
      match(SlangGrammarParser::IF);
      setState(151);
      match(SlangGrammarParser::LPAREN);
      setState(152);
      booleanExpr(0);
      setState(153);
      match(SlangGrammarParser::RPAREN);
      setState(154);
      block();
      setState(155);
      match(SlangGrammarParser::ELSE);
      setState(156);
      block();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(158);
      match(SlangGrammarParser::IF);
      setState(159);
      match(SlangGrammarParser::LPAREN);
      setState(160);
      match(SlangGrammarParser::IDENTIFIER);
      setState(161);
      match(SlangGrammarParser::RPAREN);
      setState(162);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(163);
      match(SlangGrammarParser::IF);
      setState(164);
      match(SlangGrammarParser::LPAREN);
      setState(165);
      match(SlangGrammarParser::IDENTIFIER);
      setState(166);
      match(SlangGrammarParser::RPAREN);
      setState(167);
      block();
      setState(168);
      match(SlangGrammarParser::ELSE);
      setState(169);
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

tree::TerminalNode* SlangGrammarParser::WhileStmtContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 24, SlangGrammarParser::RuleWhileStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(173);
      match(SlangGrammarParser::WHILE);
      setState(174);
      match(SlangGrammarParser::LPAREN);
      setState(175);
      booleanExpr(0);
      setState(176);
      match(SlangGrammarParser::RPAREN);
      setState(177);
      block();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(179);
      match(SlangGrammarParser::WHILE);
      setState(180);
      match(SlangGrammarParser::LPAREN);
      setState(181);
      match(SlangGrammarParser::IDENTIFIER);
      setState(182);
      match(SlangGrammarParser::RPAREN);
      setState(183);
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

//----------------- BooleanExprContext ------------------------------------------------------------------

SlangGrammarParser::BooleanExprContext::BooleanExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::LOGICALNOT() {
  return getToken(SlangGrammarParser::LOGICALNOT, 0);
}

std::vector<SlangGrammarParser::BooleanExprContext *> SlangGrammarParser::BooleanExprContext::booleanExpr() {
  return getRuleContexts<SlangGrammarParser::BooleanExprContext>();
}

SlangGrammarParser::BooleanExprContext* SlangGrammarParser::BooleanExprContext::booleanExpr(size_t i) {
  return getRuleContext<SlangGrammarParser::BooleanExprContext>(i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::BooleanExprContext::IDENTIFIER() {
  return getTokens(SlangGrammarParser::IDENTIFIER);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::IDENTIFIER(size_t i) {
  return getToken(SlangGrammarParser::IDENTIFIER, i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::BooleanExprContext::DECINT() {
  return getTokens(SlangGrammarParser::DECINT);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::DECINT(size_t i) {
  return getToken(SlangGrammarParser::DECINT, i);
}

SlangGrammarParser::RelOpContext* SlangGrammarParser::BooleanExprContext::relOp() {
  return getRuleContext<SlangGrammarParser::RelOpContext>(0);
}

SlangGrammarParser::CompOpContext* SlangGrammarParser::BooleanExprContext::compOp() {
  return getRuleContext<SlangGrammarParser::CompOpContext>(0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::TRUE() {
  return getToken(SlangGrammarParser::TRUE, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::FALSE() {
  return getToken(SlangGrammarParser::FALSE, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::LOGICALOR() {
  return getToken(SlangGrammarParser::LOGICALOR, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::LOGICALAND() {
  return getToken(SlangGrammarParser::LOGICALAND, 0);
}

tree::TerminalNode* SlangGrammarParser::BooleanExprContext::LOGICALXOR() {
  return getToken(SlangGrammarParser::LOGICALXOR, 0);
}


size_t SlangGrammarParser::BooleanExprContext::getRuleIndex() const {
  return SlangGrammarParser::RuleBooleanExpr;
}


antlrcpp::Any SlangGrammarParser::BooleanExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitBooleanExpr(this);
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
  size_t startState = 26;
  enterRecursionRule(_localctx, 26, SlangGrammarParser::RuleBooleanExpr, precedence);

    size_t _la = 0;

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
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlangGrammarParser::LOGICALNOT: {
        setState(187);
        match(SlangGrammarParser::LOGICALNOT);
        setState(188);
        booleanExpr(4);
        break;
      }

      case SlangGrammarParser::DECINT:
      case SlangGrammarParser::IDENTIFIER: {
        setState(189);
        _la = _input->LA(1);
        if (!(_la == SlangGrammarParser::DECINT

        || _la == SlangGrammarParser::IDENTIFIER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(192);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SlangGrammarParser::LT:
          case SlangGrammarParser::GT:
          case SlangGrammarParser::LTEQ:
          case SlangGrammarParser::GTEQ: {
            setState(190);
            relOp();
            break;
          }

          case SlangGrammarParser::COMP:
          case SlangGrammarParser::COMPNOTEQ: {
            setState(191);
            compOp();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(194);
        _la = _input->LA(1);
        if (!(_la == SlangGrammarParser::DECINT

        || _la == SlangGrammarParser::IDENTIFIER)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case SlangGrammarParser::TRUE: {
        setState(196);
        match(SlangGrammarParser::TRUE);
        break;
      }

      case SlangGrammarParser::FALSE: {
        setState(197);
        match(SlangGrammarParser::FALSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(211);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(209);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<BooleanExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBooleanExpr);
          setState(200);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(201);
          match(SlangGrammarParser::LOGICALOR);
          setState(202);
          booleanExpr(8);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<BooleanExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBooleanExpr);
          setState(203);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(204);
          match(SlangGrammarParser::LOGICALAND);
          setState(205);
          booleanExpr(7);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<BooleanExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleBooleanExpr);
          setState(206);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(207);
          match(SlangGrammarParser::LOGICALXOR);
          setState(208);
          booleanExpr(6);
          break;
        }

        default:
          break;
        } 
      }
      setState(213);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
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
  enterRule(_localctx, 28, SlangGrammarParser::RuleCompOp);
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
    setState(214);
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
  enterRule(_localctx, 30, SlangGrammarParser::RuleRelOp);
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
    setState(216);
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
  enterRule(_localctx, 32, SlangGrammarParser::RuleCompoundStmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SlangGrammarParser::LCURLYBR: {
        setState(218);
        block();
        break;
      }

      case SlangGrammarParser::IF: {
        setState(219);
        ifStmt();
        break;
      }

      case SlangGrammarParser::WHILE: {
        setState(220);
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

tree::TerminalNode* SlangGrammarParser::FuncDefContext::FUNCDEF() {
  return getToken(SlangGrammarParser::FUNCDEF, 0);
}

tree::TerminalNode* SlangGrammarParser::FuncDefContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::BlockContext* SlangGrammarParser::FuncDefContext::block() {
  return getRuleContext<SlangGrammarParser::BlockContext>(0);
}

tree::TerminalNode* SlangGrammarParser::FuncDefContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FuncDefContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

SlangGrammarParser::FuncArgListContext* SlangGrammarParser::FuncDefContext::funcArgList() {
  return getRuleContext<SlangGrammarParser::FuncArgListContext>(0);
}

tree::TerminalNode* SlangGrammarParser::FuncDefContext::STATEMENTEND() {
  return getToken(SlangGrammarParser::STATEMENTEND, 0);
}

tree::TerminalNode* SlangGrammarParser::FuncDefContext::RIGHTARROW() {
  return getToken(SlangGrammarParser::RIGHTARROW, 0);
}

SlangGrammarParser::TypeNameContext* SlangGrammarParser::FuncDefContext::typeName() {
  return getRuleContext<SlangGrammarParser::TypeNameContext>(0);
}


size_t SlangGrammarParser::FuncDefContext::getRuleIndex() const {
  return SlangGrammarParser::RuleFuncDef;
}


antlrcpp::Any SlangGrammarParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::FuncDefContext* SlangGrammarParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 34, SlangGrammarParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(238);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(223);
        match(SlangGrammarParser::FUNCDEF);
        setState(224);
        match(SlangGrammarParser::IDENTIFIER);
        setState(225);
        block();
        break;
      }

      case 2: {
        setState(226);
        match(SlangGrammarParser::FUNCDEF);
        setState(227);
        match(SlangGrammarParser::IDENTIFIER);
        setState(228);
        match(SlangGrammarParser::LPAREN);
        setState(229);
        match(SlangGrammarParser::RPAREN);
        setState(230);
        block();
        break;
      }

      case 3: {
        setState(231);
        match(SlangGrammarParser::FUNCDEF);
        setState(232);
        match(SlangGrammarParser::IDENTIFIER);
        setState(233);
        match(SlangGrammarParser::LPAREN);
        setState(234);
        funcArgList();
        setState(235);
        match(SlangGrammarParser::RPAREN);
        setState(236);
        block();
        break;
      }

      default:
        break;
      }
      setState(241);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SlangGrammarParser::STATEMENTEND) {
        setState(240);
        match(SlangGrammarParser::STATEMENTEND);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(258);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
      case 1: {
        setState(243);
        match(SlangGrammarParser::FUNCDEF);
        setState(244);
        match(SlangGrammarParser::IDENTIFIER);
        setState(245);
        block();
        break;
      }

      case 2: {
        setState(246);
        match(SlangGrammarParser::FUNCDEF);
        setState(247);
        match(SlangGrammarParser::IDENTIFIER);
        setState(248);
        match(SlangGrammarParser::LPAREN);
        setState(249);
        match(SlangGrammarParser::RPAREN);
        setState(250);
        block();
        break;
      }

      case 3: {
        setState(251);
        match(SlangGrammarParser::FUNCDEF);
        setState(252);
        match(SlangGrammarParser::IDENTIFIER);
        setState(253);
        match(SlangGrammarParser::LPAREN);
        setState(254);
        funcArgList();
        setState(255);
        match(SlangGrammarParser::RPAREN);
        setState(256);
        block();
        break;
      }

      default:
        break;
      }
      setState(260);
      match(SlangGrammarParser::RIGHTARROW);
      setState(261);
      typeName();
      setState(263);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SlangGrammarParser::STATEMENTEND) {
        setState(262);
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
  enterRule(_localctx, 36, SlangGrammarParser::RuleFuncArgList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(277);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(267);
      argParam();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(271); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(268);
                argParam();
                setState(269);
                match(SlangGrammarParser::COMMA);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(273); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(275);
      argParam();
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
  enterRule(_localctx, 38, SlangGrammarParser::RuleArgParam);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(SlangGrammarParser::IDENTIFIER);
    setState(280);
    match(SlangGrammarParser::COLON);
    setState(281);
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

std::vector<SlangGrammarParser::ExprContext *> SlangGrammarParser::CallArgListContext::expr() {
  return getRuleContexts<SlangGrammarParser::ExprContext>();
}

SlangGrammarParser::ExprContext* SlangGrammarParser::CallArgListContext::expr(size_t i) {
  return getRuleContext<SlangGrammarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> SlangGrammarParser::CallArgListContext::COMMA() {
  return getTokens(SlangGrammarParser::COMMA);
}

tree::TerminalNode* SlangGrammarParser::CallArgListContext::COMMA(size_t i) {
  return getToken(SlangGrammarParser::COMMA, i);
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
  enterRule(_localctx, 40, SlangGrammarParser::RuleCallArgList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(293);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(283);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(287); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(284);
                expr(0);
                setState(285);
                match(SlangGrammarParser::COMMA);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(289); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(291);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

SlangGrammarParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SlangGrammarParser::FunctionCallContext::LPAREN() {
  return getToken(SlangGrammarParser::LPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallContext::RPAREN() {
  return getToken(SlangGrammarParser::RPAREN, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallContext::RIGHTARROW() {
  return getToken(SlangGrammarParser::RIGHTARROW, 0);
}

tree::TerminalNode* SlangGrammarParser::FunctionCallContext::IDENTIFIER() {
  return getToken(SlangGrammarParser::IDENTIFIER, 0);
}

SlangGrammarParser::CallArgListContext* SlangGrammarParser::FunctionCallContext::callArgList() {
  return getRuleContext<SlangGrammarParser::CallArgListContext>(0);
}


size_t SlangGrammarParser::FunctionCallContext::getRuleIndex() const {
  return SlangGrammarParser::RuleFunctionCall;
}


antlrcpp::Any SlangGrammarParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<SlangGrammarVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

SlangGrammarParser::FunctionCallContext* SlangGrammarParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 42, SlangGrammarParser::RuleFunctionCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(305);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(295);
      match(SlangGrammarParser::LPAREN);
      setState(296);
      match(SlangGrammarParser::RPAREN);
      setState(297);
      match(SlangGrammarParser::RIGHTARROW);
      setState(298);
      match(SlangGrammarParser::IDENTIFIER);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(299);
      match(SlangGrammarParser::LPAREN);
      setState(300);
      callArgList();
      setState(301);
      match(SlangGrammarParser::RPAREN);
      setState(302);
      match(SlangGrammarParser::RIGHTARROW);
      setState(303);
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
    case 6: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);
    case 13: return booleanExprSempred(dynamic_cast<BooleanExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SlangGrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 11);
    case 1: return precpred(_ctx, 10);
    case 2: return precpred(_ctx, 9);
    case 3: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

bool SlangGrammarParser::booleanExprSempred(BooleanExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 7);
    case 5: return precpred(_ctx, 6);
    case 6: return precpred(_ctx, 5);

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
  "program", "statements", "commentMultiline", "statement", "returnStmt", 
  "assignStmt", "expr", "declStmt", "typeName", "declAssignStmt", "block", 
  "ifStmt", "whileStmt", "booleanExpr", "compOp", "relOp", "compoundStmt", 
  "funcDef", "funcArgList", "argParam", "callArgList", "functionCall"
};

std::vector<std::string> SlangGrammarParser::_literalNames = {
  "", "'<%>'", "'<<>>'", "'('", "')'", "'{'", "'}'", "'['", "']'", "'+'", 
  "'-'", "'/'", "'*'", "'='", "'<'", "'>'", "'<='", "'>='", "'=='", "'!='", 
  "'\\\\*'", "'*\\\\'", "", "", "", "", "", "", "", "", "'&'", "'|'", "'|!'", 
  "'!'", "'->'", "'if'", "'else'", "'introducing'", "'var'", "':'", "';'", 
  "'while'", "'return'", "'int'", "'string'", "'booly'", "'void'", "'null'", 
  "", "", "", "','", "", "", "' '"
};

std::vector<std::string> SlangGrammarParser::_symbolicNames = {
  "", "PROGSTART", "PROGEND", "LPAREN", "RPAREN", "LCURLYBR", "RCURLYBR", 
  "LSQBR", "RSQBR", "PLUS", "MINUS", "DIVIDE", "MULT", "EQUAL", "LT", "GT", 
  "LTEQ", "GTEQ", "COMP", "COMPNOTEQ", "MARKERCOMMULTILINESTART", "MARKERCOMMULTILINEEND", 
  "MARKERCOMSINGLELINE", "COMMENT", "LOGICALAND", "LOGICALOR", "LOGICALXOR", 
  "LOGICALNOT", "TRUE", "FALSE", "BINAND", "BINOR", "BINXOR", "BINNOT", 
  "RIGHTARROW", "IF", "ELSE", "FUNCDEF", "VARDEF", "COLON", "STATEMENTEND", 
  "WHILE", "RETURN", "INTTYPE", "STRINGTYPE", "BOOLTYPE", "VOIDTYPE", "NULLVALUE", 
  "DECINT", "IDENTIFIER", "STRING", "COMMA", "NEWLINE", "TAB", "WHITESPACE", 
  "OTHER"
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
       0x3, 0x39, 0x136, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x39, 0xa, 
       0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x3f, 0xa, 
       0x3, 0xd, 0x3, 0xe, 0x3, 0x40, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x45, 
       0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x48, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x51, 
       0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
       0x6, 0x58, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6a, 
       0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x7, 0x8, 0x78, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x7b, 0xb, 0x8, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
       0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
       0x5, 0xc, 0x91, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xae, 0xa, 0xd, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
       0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xbb, 0xa, 0xe, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
       0xf, 0xc3, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 
       0xf, 0xc9, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
       0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xd4, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0xd7, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xe0, 
       0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xf1, 0xa, 
       0x13, 0x3, 0x13, 0x5, 0x13, 0xf4, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
       0x3, 0x13, 0x5, 0x13, 0x105, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
       0x13, 0x5, 0x13, 0x10a, 0xa, 0x13, 0x5, 0x13, 0x10c, 0xa, 0x13, 0x3, 
       0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x112, 0xa, 0x14, 
       0xd, 0x14, 0xe, 0x14, 0x113, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x118, 
       0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
       0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x122, 0xa, 0x16, 0xd, 
       0x16, 0xe, 0x16, 0x123, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x128, 0xa, 
       0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x134, 
       0xa, 0x17, 0x3, 0x17, 0x3, 0x46, 0x4, 0xe, 0x1c, 0x18, 0x2, 0x4, 
       0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 
       0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x6, 0x3, 0x2, 
       0x2d, 0x30, 0x3, 0x2, 0x32, 0x33, 0x3, 0x2, 0x14, 0x15, 0x3, 0x2, 
       0x10, 0x13, 0x2, 0x150, 0x2, 0x38, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 
       0x3, 0x2, 0x2, 0x2, 0x6, 0x42, 0x3, 0x2, 0x2, 0x2, 0x8, 0x50, 0x3, 
       0x2, 0x2, 0x2, 0xa, 0x57, 0x3, 0x2, 0x2, 0x2, 0xc, 0x59, 0x3, 0x2, 
       0x2, 0x2, 0xe, 0x69, 0x3, 0x2, 0x2, 0x2, 0x10, 0x7c, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x81, 0x3, 0x2, 0x2, 0x2, 0x14, 0x83, 0x3, 0x2, 0x2, 0x2, 
       0x16, 0x90, 0x3, 0x2, 0x2, 0x2, 0x18, 0xad, 0x3, 0x2, 0x2, 0x2, 0x1a, 
       0xba, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xc8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd8, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0xda, 0x3, 0x2, 0x2, 0x2, 0x22, 0xdf, 0x3, 
       0x2, 0x2, 0x2, 0x24, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x117, 0x3, 
       0x2, 0x2, 0x2, 0x28, 0x119, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x127, 0x3, 
       0x2, 0x2, 0x2, 0x2c, 0x133, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x39, 0x7, 
       0x2, 0x2, 0x3, 0x2f, 0x30, 0x7, 0x3, 0x2, 0x2, 0x30, 0x39, 0x7, 0x4, 
       0x2, 0x2, 0x31, 0x32, 0x7, 0x3, 0x2, 0x2, 0x32, 0x33, 0x5, 0x4, 0x3, 
       0x2, 0x33, 0x34, 0x7, 0x4, 0x2, 0x2, 0x34, 0x39, 0x3, 0x2, 0x2, 0x2, 
       0x35, 0x36, 0x5, 0x4, 0x3, 0x2, 0x36, 0x37, 0x7, 0x2, 0x2, 0x3, 0x37, 
       0x39, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x38, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x38, 0x31, 0x3, 0x2, 0x2, 0x2, 0x38, 0x35, 0x3, 
       0x2, 0x2, 0x2, 0x39, 0x3, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3f, 0x5, 0x8, 
       0x5, 0x2, 0x3b, 0x3f, 0x5, 0x22, 0x12, 0x2, 0x3c, 0x3f, 0x5, 0x24, 
       0x13, 0x2, 0x3d, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3e, 0x3a, 0x3, 0x2, 
       0x2, 0x2, 0x3e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 
       0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 
       0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x42, 0x46, 0x7, 0x16, 0x2, 0x2, 0x43, 0x45, 
       0xb, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 
       0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 
       0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 
       0x2, 0x49, 0x4a, 0x7, 0x17, 0x2, 0x2, 0x4a, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x4b, 0x51, 0x5, 0x10, 0x9, 0x2, 0x4c, 0x51, 0x5, 0xc, 0x7, 0x2, 
       0x4d, 0x51, 0x5, 0x14, 0xb, 0x2, 0x4e, 0x51, 0x5, 0x2c, 0x17, 0x2, 
       0x4f, 0x51, 0x5, 0xa, 0x6, 0x2, 0x50, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x50, 
       0x4c, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 
       0x3, 0x2, 0x2, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
       0x2, 0x2, 0x2, 0x52, 0x53, 0x7, 0x2a, 0x2, 0x2, 0x53, 0x9, 0x3, 0x2, 
       0x2, 0x2, 0x54, 0x55, 0x7, 0x2c, 0x2, 0x2, 0x55, 0x58, 0x5, 0xe, 
       0x8, 0x2, 0x56, 0x58, 0x7, 0x2c, 0x2, 0x2, 0x57, 0x54, 0x3, 0x2, 
       0x2, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0xb, 0x3, 0x2, 0x2, 
       0x2, 0x59, 0x5a, 0x7, 0x33, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xf, 0x2, 
       0x2, 0x5b, 0x5c, 0x5, 0xe, 0x8, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 
       0x5d, 0x5e, 0x8, 0x8, 0x1, 0x2, 0x5e, 0x5f, 0x7, 0x5, 0x2, 0x2, 0x5f, 
       0x60, 0x5, 0xe, 0x8, 0x2, 0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 0x6a, 
       0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0xc, 0x2, 0x2, 0x63, 0x6a, 0x5, 
       0xe, 0x8, 0x8, 0x64, 0x6a, 0x5, 0x1c, 0xf, 0x2, 0x65, 0x6a, 0x7, 
       0x33, 0x2, 0x2, 0x66, 0x6a, 0x7, 0x32, 0x2, 0x2, 0x67, 0x6a, 0x7, 
       0x34, 0x2, 0x2, 0x68, 0x6a, 0x5, 0x2c, 0x17, 0x2, 0x69, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x69, 0x62, 0x3, 0x2, 0x2, 0x2, 0x69, 0x64, 0x3, 0x2, 
       0x2, 0x2, 0x69, 0x65, 0x3, 0x2, 0x2, 0x2, 0x69, 0x66, 0x3, 0x2, 0x2, 
       0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 
       0x6a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0xc, 0xd, 0x2, 0x2, 0x6c, 
       0x6d, 0x7, 0xd, 0x2, 0x2, 0x6d, 0x78, 0x5, 0xe, 0x8, 0xe, 0x6e, 0x6f, 
       0xc, 0xc, 0x2, 0x2, 0x6f, 0x70, 0x7, 0xe, 0x2, 0x2, 0x70, 0x78, 0x5, 
       0xe, 0x8, 0xd, 0x71, 0x72, 0xc, 0xb, 0x2, 0x2, 0x72, 0x73, 0x7, 0xb, 
       0x2, 0x2, 0x73, 0x78, 0x5, 0xe, 0x8, 0xc, 0x74, 0x75, 0xc, 0xa, 0x2, 
       0x2, 0x75, 0x76, 0x7, 0xc, 0x2, 0x2, 0x76, 0x78, 0x5, 0xe, 0x8, 0xb, 
       0x77, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x77, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x77, 
       0x71, 0x3, 0x2, 0x2, 0x2, 0x77, 0x74, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 
       0x2, 0x2, 0x2, 0x7a, 0xf, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 
       0x2, 0x2, 0x7c, 0x7d, 0x7, 0x28, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x33, 
       0x2, 0x2, 0x7e, 0x7f, 0x7, 0x29, 0x2, 0x2, 0x7f, 0x80, 0x5, 0x12, 
       0xa, 0x2, 0x80, 0x11, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x9, 0x2, 0x2, 
       0x2, 0x82, 0x13, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x28, 0x2, 
       0x2, 0x84, 0x85, 0x7, 0x33, 0x2, 0x2, 0x85, 0x86, 0x7, 0x29, 0x2, 
       0x2, 0x86, 0x87, 0x5, 0x12, 0xa, 0x2, 0x87, 0x88, 0x7, 0xf, 0x2, 
       0x2, 0x88, 0x89, 0x5, 0xe, 0x8, 0x2, 0x89, 0x15, 0x3, 0x2, 0x2, 0x2, 
       0x8a, 0x8b, 0x7, 0x7, 0x2, 0x2, 0x8b, 0x91, 0x7, 0x8, 0x2, 0x2, 0x8c, 
       0x8d, 0x7, 0x7, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0x4, 0x3, 0x2, 0x8e, 0x8f, 
       0x7, 0x8, 0x2, 0x2, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8a, 0x3, 
       0x2, 0x2, 0x2, 0x90, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x91, 0x17, 0x3, 0x2, 
       0x2, 0x2, 0x92, 0x93, 0x7, 0x25, 0x2, 0x2, 0x93, 0x94, 0x7, 0x5, 
       0x2, 0x2, 0x94, 0x95, 0x5, 0x1c, 0xf, 0x2, 0x95, 0x96, 0x7, 0x6, 
       0x2, 0x2, 0x96, 0x97, 0x5, 0x16, 0xc, 0x2, 0x97, 0xae, 0x3, 0x2, 
       0x2, 0x2, 0x98, 0x99, 0x7, 0x25, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x5, 
       0x2, 0x2, 0x9a, 0x9b, 0x5, 0x1c, 0xf, 0x2, 0x9b, 0x9c, 0x7, 0x6, 
       0x2, 0x2, 0x9c, 0x9d, 0x5, 0x16, 0xc, 0x2, 0x9d, 0x9e, 0x7, 0x26, 
       0x2, 0x2, 0x9e, 0x9f, 0x5, 0x16, 0xc, 0x2, 0x9f, 0xae, 0x3, 0x2, 
       0x2, 0x2, 0xa0, 0xa1, 0x7, 0x25, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x5, 
       0x2, 0x2, 0xa2, 0xa3, 0x7, 0x33, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x6, 
       0x2, 0x2, 0xa4, 0xae, 0x5, 0x16, 0xc, 0x2, 0xa5, 0xa6, 0x7, 0x25, 
       0x2, 0x2, 0xa6, 0xa7, 0x7, 0x5, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x33, 
       0x2, 0x2, 0xa8, 0xa9, 0x7, 0x6, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x16, 
       0xc, 0x2, 0xaa, 0xab, 0x7, 0x26, 0x2, 0x2, 0xab, 0xac, 0x5, 0x16, 
       0xc, 0x2, 0xac, 0xae, 0x3, 0x2, 0x2, 0x2, 0xad, 0x92, 0x3, 0x2, 0x2, 
       0x2, 0xad, 0x98, 0x3, 0x2, 0x2, 0x2, 0xad, 0xa0, 0x3, 0x2, 0x2, 0x2, 
       0xad, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xae, 0x19, 0x3, 0x2, 0x2, 0x2, 0xaf, 
       0xb0, 0x7, 0x2b, 0x2, 0x2, 0xb0, 0xb1, 0x7, 0x5, 0x2, 0x2, 0xb1, 
       0xb2, 0x5, 0x1c, 0xf, 0x2, 0xb2, 0xb3, 0x7, 0x6, 0x2, 0x2, 0xb3, 
       0xb4, 0x5, 0x16, 0xc, 0x2, 0xb4, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb5, 
       0xb6, 0x7, 0x2b, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0x5, 0x2, 0x2, 0xb7, 
       0xb8, 0x7, 0x33, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x6, 0x2, 0x2, 0xb9, 
       0xbb, 0x5, 0x16, 0xc, 0x2, 0xba, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xba, 
       0xb5, 0x3, 0x2, 0x2, 0x2, 0xbb, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
       0x8, 0xf, 0x1, 0x2, 0xbd, 0xbe, 0x7, 0x1d, 0x2, 0x2, 0xbe, 0xc9, 
       0x5, 0x1c, 0xf, 0x6, 0xbf, 0xc2, 0x9, 0x3, 0x2, 0x2, 0xc0, 0xc3, 
       0x5, 0x20, 0x11, 0x2, 0xc1, 0xc3, 0x5, 0x1e, 0x10, 0x2, 0xc2, 0xc0, 
       0x3, 0x2, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xc4, 0xc5, 0x9, 0x3, 0x2, 0x2, 0xc5, 0xc9, 0x3, 0x2, 
       0x2, 0x2, 0xc6, 0xc9, 0x7, 0x1e, 0x2, 0x2, 0xc7, 0xc9, 0x7, 0x1f, 
       0x2, 0x2, 0xc8, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xbf, 0x3, 0x2, 0x2, 
       0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 
       0xc9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0xc, 0x9, 0x2, 0x2, 0xcb, 
       0xcc, 0x7, 0x1b, 0x2, 0x2, 0xcc, 0xd4, 0x5, 0x1c, 0xf, 0xa, 0xcd, 
       0xce, 0xc, 0x8, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x1a, 0x2, 0x2, 0xcf, 
       0xd4, 0x5, 0x1c, 0xf, 0x9, 0xd0, 0xd1, 0xc, 0x7, 0x2, 0x2, 0xd1, 
       0xd2, 0x7, 0x1c, 0x2, 0x2, 0xd2, 0xd4, 0x5, 0x1c, 0xf, 0x8, 0xd3, 
       0xca, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd0, 
       0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 
       0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x9, 0x4, 0x2, 
       0x2, 0xd9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x9, 0x5, 0x2, 0x2, 
       0xdb, 0x21, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xe0, 0x5, 0x16, 0xc, 0x2, 
       0xdd, 0xe0, 0x5, 0x18, 0xd, 0x2, 0xde, 0xe0, 0x5, 0x1a, 0xe, 0x2, 
       0xdf, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 
       0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0x23, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 
       0x7, 0x27, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x33, 0x2, 0x2, 0xe3, 0xf1, 
       0x5, 0x16, 0xc, 0x2, 0xe4, 0xe5, 0x7, 0x27, 0x2, 0x2, 0xe5, 0xe6, 
       0x7, 0x33, 0x2, 0x2, 0xe6, 0xe7, 0x7, 0x5, 0x2, 0x2, 0xe7, 0xe8, 
       0x7, 0x6, 0x2, 0x2, 0xe8, 0xf1, 0x5, 0x16, 0xc, 0x2, 0xe9, 0xea, 
       0x7, 0x27, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x33, 0x2, 0x2, 0xeb, 0xec, 
       0x7, 0x5, 0x2, 0x2, 0xec, 0xed, 0x5, 0x26, 0x14, 0x2, 0xed, 0xee, 
       0x7, 0x6, 0x2, 0x2, 0xee, 0xef, 0x5, 0x16, 0xc, 0x2, 0xef, 0xf1, 
       0x3, 0x2, 0x2, 0x2, 0xf0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xe4, 0x3, 
       0x2, 0x2, 0x2, 0xf0, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 
       0x2, 0x2, 0xf2, 0xf4, 0x7, 0x2a, 0x2, 0x2, 0xf3, 0xf2, 0x3, 0x2, 
       0x2, 0x2, 0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0x10c, 0x3, 0x2, 
       0x2, 0x2, 0xf5, 0xf6, 0x7, 0x27, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x33, 
       0x2, 0x2, 0xf7, 0x105, 0x5, 0x16, 0xc, 0x2, 0xf8, 0xf9, 0x7, 0x27, 
       0x2, 0x2, 0xf9, 0xfa, 0x7, 0x33, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x5, 
       0x2, 0x2, 0xfb, 0xfc, 0x7, 0x6, 0x2, 0x2, 0xfc, 0x105, 0x5, 0x16, 
       0xc, 0x2, 0xfd, 0xfe, 0x7, 0x27, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x33, 
       0x2, 0x2, 0xff, 0x100, 0x7, 0x5, 0x2, 0x2, 0x100, 0x101, 0x5, 0x26, 
       0x14, 0x2, 0x101, 0x102, 0x7, 0x6, 0x2, 0x2, 0x102, 0x103, 0x5, 0x16, 
       0xc, 0x2, 0x103, 0x105, 0x3, 0x2, 0x2, 0x2, 0x104, 0xf5, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x104, 0xfd, 0x3, 0x2, 
       0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x7, 0x24, 
       0x2, 0x2, 0x107, 0x109, 0x5, 0x12, 0xa, 0x2, 0x108, 0x10a, 0x7, 0x2a, 
       0x2, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 
       0x2, 0x2, 0x10a, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10b, 0xf0, 0x3, 0x2, 
       0x2, 0x2, 0x10b, 0x104, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x25, 0x3, 0x2, 
       0x2, 0x2, 0x10d, 0x118, 0x5, 0x28, 0x15, 0x2, 0x10e, 0x10f, 0x5, 
       0x28, 0x15, 0x2, 0x10f, 0x110, 0x7, 0x35, 0x2, 0x2, 0x110, 0x112, 
       0x3, 0x2, 0x2, 0x2, 0x111, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 
       0x3, 0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
       0x3, 0x2, 0x2, 0x2, 0x114, 0x115, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 
       0x5, 0x28, 0x15, 0x2, 0x116, 0x118, 0x3, 0x2, 0x2, 0x2, 0x117, 0x10d, 
       0x3, 0x2, 0x2, 0x2, 0x117, 0x111, 0x3, 0x2, 0x2, 0x2, 0x118, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x7, 0x33, 0x2, 0x2, 0x11a, 0x11b, 
       0x7, 0x29, 0x2, 0x2, 0x11b, 0x11c, 0x5, 0x12, 0xa, 0x2, 0x11c, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0x11d, 0x128, 0x5, 0xe, 0x8, 0x2, 0x11e, 0x11f, 
       0x5, 0xe, 0x8, 0x2, 0x11f, 0x120, 0x7, 0x35, 0x2, 0x2, 0x120, 0x122, 
       0x3, 0x2, 0x2, 0x2, 0x121, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 
       0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 
       0x5, 0xe, 0x8, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x11d, 
       0x3, 0x2, 0x2, 0x2, 0x127, 0x121, 0x3, 0x2, 0x2, 0x2, 0x128, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x5, 0x2, 0x2, 0x12a, 0x12b, 
       0x7, 0x6, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x24, 0x2, 0x2, 0x12c, 0x134, 
       0x7, 0x33, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x5, 0x2, 0x2, 0x12e, 0x12f, 
       0x5, 0x2a, 0x16, 0x2, 0x12f, 0x130, 0x7, 0x6, 0x2, 0x2, 0x130, 0x131, 
       0x7, 0x24, 0x2, 0x2, 0x131, 0x132, 0x7, 0x33, 0x2, 0x2, 0x132, 0x134, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x129, 0x3, 0x2, 0x2, 0x2, 0x133, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x134, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x38, 
       0x3e, 0x40, 0x46, 0x50, 0x57, 0x69, 0x77, 0x79, 0x90, 0xad, 0xba, 
       0xc2, 0xc8, 0xd3, 0xd5, 0xdf, 0xf0, 0xf3, 0x104, 0x109, 0x10b, 0x113, 
       0x117, 0x123, 0x127, 0x133, 
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
