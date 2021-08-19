//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_FUNCTIONCALLEXPRCHECKER_H
#define SLANG_FUNCTIONCALLEXPRCHECKER_H

#include "SymbolTable.h"
#include "SlangGrammarBaseVisitor.h"
#include "IntExpressionChecker.h"
#include "BoolExpressionChecker.h"
#include "StringExpressionChecker.h"

class FunctionCallExprChecker {
public:
    static antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx,
                                                   const std::shared_ptr<SymbolTable>& symbolTable);

    static antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx,
                                                 const std::shared_ptr<SymbolTable>& symbolTable);

private:
    static bool parseAndCheckParamList(SlangGrammarParser::FunctionCallWithArgsContext *ctx,
                                const std::shared_ptr<FunctionSymbol> &functionSymbol,
                                const std::shared_ptr<SymbolTable>& symbolTable);
};


#endif //SLANG_FUNCTIONCALLEXPRCHECKER_H
