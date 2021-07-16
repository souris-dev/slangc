
// Generated from D:/Documents/Projects/slang/src/grammar/SlangGrammar.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  SlangGrammarLexer : public antlr4::Lexer {
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

