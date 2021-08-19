//
// Created by suore on 15-07-2021.
//

#ifndef SLANG_STATICTYPESCHECKER_H
#define SLANG_STATICTYPESCHECKER_H

#include "../antlrgen/SlangGrammarBaseVisitor.h"
#include "SymbolTable.h"
#include "FunctionCallExprChecker.h"

class StaticTypesChecker : public SlangGrammarBaseVisitor {
private:
    std::shared_ptr<SymbolTable> symbolTable = nullptr;

    template<class T>
    std::vector<std::shared_ptr<Symbol>> parseAndAddFunctionParams(T *ctx);

public:
    explicit StaticTypesChecker(std::shared_ptr<SymbolTable> symbolTableRef);

    antlrcpp::Any visitProgram(SlangGrammarParser::ProgramContext *ctx) override;

    antlrcpp::Any visitBlock(SlangGrammarParser::BlockContext *ctx) override;

    antlrcpp::Any visitDeclStmt(SlangGrammarParser::DeclStmtContext *ctx) override;

    antlrcpp::Any visitNormalDeclAssignStmt(SlangGrammarParser::NormalDeclAssignStmtContext *ctx) override;

    antlrcpp::Any visitBooleanDeclAssignStmt(SlangGrammarParser::BooleanDeclAssignStmtContext *ctx) override;

    antlrcpp::Any visitExprAssign(SlangGrammarParser::ExprAssignContext *ctx) override;

    antlrcpp::Any visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) override;

    antlrcpp::Any visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) override;

    antlrcpp::Any visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) override;

    antlrcpp::Any visitBooleanExprAssign(SlangGrammarParser::BooleanExprAssignContext *ctx) override;

    antlrcpp::Any visitImplicitRetTypeFuncDef(SlangGrammarParser::ImplicitRetTypeFuncDefContext *ctx) override;

    antlrcpp::Any visitExplicitRetTypeFuncDef(SlangGrammarParser::ExplicitRetTypeFuncDefContext *ctx) override;
};


#endif //SLANG_STATICTYPESCHECKER_H
