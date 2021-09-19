//
// Created by suore on 18-09-2021.
//

#include "IRCodeGenerationVisitor.h"

IRCodeGenerationVisitor::IRCodeGenerationVisitor(llvm::Module *ModuleObj, llvm::IRBuilder<> &Builder)
: ModuleObj(ModuleObj), Builder(Builder) { }

antlrcpp::Any IRCodeGenerationVisitor::visitProgram(SlangGrammarParser::ProgramContext *ctx) {
    ModuleObj->setModuleIdentifier("SlangProgram");
    return SlangGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitBlock(SlangGrammarParser::BlockContext *ctx) {
    return SlangGrammarBaseVisitor::visitBlock(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitDeclStmt(SlangGrammarParser::DeclStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitDeclStmt(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitNormalDeclAssignStmt(SlangGrammarParser::NormalDeclAssignStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitNormalDeclAssignStmt(ctx);
}

antlrcpp::Any
IRCodeGenerationVisitor::visitBooleanDeclAssignStmt(SlangGrammarParser::BooleanDeclAssignStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanDeclAssignStmt(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitExprAssign(SlangGrammarParser::ExprAssignContext *ctx) {
    return SlangGrammarBaseVisitor::visitExprAssign(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    return SlangGrammarBaseVisitor::visitExprIdentifier(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx) {
    return SlangGrammarBaseVisitor::visitFunctionCallWithArgs(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx) {
    return SlangGrammarBaseVisitor::visitFunctionCallNoArgs(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitBooleanExprAssign(SlangGrammarParser::BooleanExprAssignContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprAssign(ctx);
}

antlrcpp::Any
IRCodeGenerationVisitor::visitImplicitRetTypeFuncDef(SlangGrammarParser::ImplicitRetTypeFuncDefContext *ctx) {
    return SlangGrammarBaseVisitor::visitImplicitRetTypeFuncDef(ctx);
}

antlrcpp::Any
IRCodeGenerationVisitor::visitExplicitRetTypeFuncDef(SlangGrammarParser::ExplicitRetTypeFuncDefContext *ctx) {
    return SlangGrammarBaseVisitor::visitExplicitRetTypeFuncDef(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitIfStmt(SlangGrammarParser::IfStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitIfStmt(ctx);
}

antlrcpp::Any IRCodeGenerationVisitor::visitWhileStmt(SlangGrammarParser::WhileStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitWhileStmt(ctx);
}
