//
// Created by suore on 18-09-2021.
//

#ifndef SLANG_IRCODEGENERATIONVISITOR_H
#define SLANG_IRCODEGENERATIONVISITOR_H

#include "SlangGrammarBaseVisitor.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Verifier.h"

class IRCodeGenerationVisitor : public SlangGrammarBaseVisitor {
private:
    llvm::IRBuilder<> &Builder;
    llvm::Module *ModuleObj;

public:
    IRCodeGenerationVisitor(llvm::Module *ModuleObj, llvm::IRBuilder<> &Builder);

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

    antlrcpp::Any visitIfStmt(SlangGrammarParser::IfStmtContext *ctx) override;

    antlrcpp::Any visitWhileStmt(SlangGrammarParser::WhileStmtContext *ctx) override;
};


#endif //SLANG_IRCODEGENERATIONVISITOR_H
