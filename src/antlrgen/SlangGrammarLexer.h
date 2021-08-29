
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SlangGrammarLexer : public antlr4::Lexer {
public:
  enum {
    PROGSTART = 1, PROGEND = 2, LPAREN = 3, RPAREN = 4, LCURLYBR = 5, RCURLYBR = 6, 
    LSQBR = 7, RSQBR = 8, PLUS = 9, MINUS = 10, DIVIDE = 11, MULT = 12, 
    MODULO = 13, EQUAL = 14, LT = 15, GT = 16, LTEQ = 17, GTEQ = 18, COMP = 19, 
    COMPNOTEQ = 20, MARKERCOMMULTILINESTART = 21, MARKERCOMMULTILINEEND = 22, 
    MARKERCOMSINGLELINE = 23, COMMENTSL = 24, COMMENTML = 25, LOGICALAND = 26, 
    LOGICALOR = 27, LOGICALXOR = 28, LOGICALNOT = 29, TRUE = 30, FALSE = 31, 
    IF = 32, ELSE = 33, FUNCDEF = 34, VARDEF = 35, BINAND = 36, BINOR = 37, 
    BINXOR = 38, BINNOT = 39, RIGHTARROW = 40, COLON = 41, STATEMENTEND = 42, 
    WHILE = 43, RETURN = 44, INTTYPE = 45, STRINGTYPE = 46, BOOLTYPE = 47, 
    VOIDTYPE = 48, NULLVALUE = 49, DECINT = 50, IDENTIFIER = 51, STRING = 52, 
    COMMA = 53, NEWLINE = 54, TAB = 55, WHITESPACE = 56, OTHER = 57
  };

  explicit SlangGrammarLexer(antlr4::CharStream *input);
  ~SlangGrammarLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

