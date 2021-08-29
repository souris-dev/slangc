//
// Created by suore on 26-08-2021.
//

#include "ExpressionTypeDetector.h"
#include "FunctionCallExprChecker.h"
#include <utility>

ExpressionTypeDetector::ExpressionTypeDetector(std::shared_ptr<SymbolTable> symbolTable)
                                                : symbolTable(std::move(symbolTable)) {
    symbolTypesInExpr[SymbolType::INT] = 0;
    symbolTypesInExpr[SymbolType::STRING] = 0;
    symbolTypesInExpr[SymbolType::BOOL] = 0;
    symbolTypesInExpr[SymbolType::VOID] = 0;
}

antlrcpp::Any ExpressionTypeDetector::visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) {
    symbolTypesInExpr[SymbolType::INT]++;
    return SlangGrammarBaseVisitor::visitExprDecint(ctx);
}

antlrcpp::Any ExpressionTypeDetector::visitExprString(SlangGrammarParser::ExprStringContext *ctx) {
    symbolTypesInExpr[SymbolType::STRING]++;
    return SlangGrammarBaseVisitor::visitExprString(ctx);
}

antlrcpp::Any ExpressionTypeDetector::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    auto idName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(idName);

    if (symbol == nullptr) {
        // TODO: throw error and terminate because symbol was not found
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Unknown identifier: " << idName << "." << std::endl;
        exit(-1);
    }

    symbolTypesInExpr[symbol->getSymbolType()]++;
    return SlangGrammarBaseVisitor::visitExprIdentifier(ctx);
}

std::pair<bool, SymbolType> ExpressionTypeDetector::getType(SlangGrammarParser::ExprContext *ctx) {
    visit(ctx);

    int maxFreq = 0, nTerms = 0;
    SymbolType maxFreqSymbolType;

    for (std::pair<const SymbolType, int> sType : symbolTypesInExpr) {
        if (sType.second > maxFreq) {
            maxFreq = sType.second;
            maxFreqSymbolType = sType.first;
        }
        nTerms += sType.second;
    }

    std::pair<bool, SymbolType> retVal;

    if (maxFreq == nTerms) {
        // all terms have the same type
        retVal.first = true;
    }
    else {
        retVal.first = false;
    }

    retVal.second = maxFreqSymbolType;

    return retVal;
}

antlrcpp::Any ExpressionTypeDetector::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    SymbolType retType = FunctionCallExprChecker::visitFunctionCallWithArgs(ctx, symbolTable).as<SymbolType>();
    symbolTypesInExpr[retType]++;
    return nullptr; // treat a function call as a terminal in the expression
}

antlrcpp::Any ExpressionTypeDetector::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    SymbolType retType = FunctionCallExprChecker::visitFunctionCallNoArgs(ctx, symbolTable).as<SymbolType>();
    symbolTypesInExpr[retType]++;
    return nullptr; // treat a function call as a terminal in the expression
}
