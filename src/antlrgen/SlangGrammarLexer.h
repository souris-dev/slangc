
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
    MARKERCOMSINGLELINE = 23, COMMENT = 24, LOGICALAND = 25, LOGICALOR = 26, 
    LOGICALXOR = 27, LOGICALNOT = 28, TRUE = 29, FALSE = 30, IF = 31, ELSE = 32, 
    FUNCDEF = 33, VARDEF = 34, BINAND = 35, BINOR = 36, BINXOR = 37, BINNOT = 38, 
    RIGHTARROW = 39, COLON = 40, STATEMENTEND = 41, WHILE = 42, RETURN = 43, 
    INTTYPE = 44, STRINGTYPE = 45, BOOLTYPE = 46, VOIDTYPE = 47, NULLVALUE = 48, 
    DECINT = 49, IDENTIFIER = 50, STRING = 51, COMMA = 52, NEWLINE = 53, 
    TAB = 54, WHITESPACE = 55, OTHER = 56
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

