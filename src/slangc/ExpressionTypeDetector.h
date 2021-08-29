//
// Created by suore on 26-08-2021.
//

#ifndef SLANG_EXPRESSIONTYPEDETECTOR_H
#define SLANG_EXPRESSIONTYPEDETECTOR_H

#include "SlangGrammarBaseVisitor.h"
#include "SymbolTable.h"


class ExpressionTypeDetector : SlangGrammarBaseVisitor {
public:
    explicit ExpressionTypeDetector(std::shared_ptr<SymbolTable> symbolTable);

    antlrcpp::Any visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) override;

    antlrcpp::Any visitExprString(SlangGrammarParser::ExprStringContext *ctx) override;

    antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

    // Returns a pair. The first element is true if all the terminals
    // are of the same type in the expression and false if not.
    // The second element of the pair is SymbolType with the highest frequency in the expression.
    std::pair<bool, SymbolType> getType(SlangGrammarParser::ExprContext *ctx);

private:
    std::shared_ptr<SymbolTable> symbolTable;
    std::unordered_map<SymbolType, int> symbolTypesInExpr;
};


#endif //SLANG_EXPRESSIONTYPEDETECTOR_H
