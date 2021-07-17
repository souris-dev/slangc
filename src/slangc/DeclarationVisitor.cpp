//
// Created by suore on 15-07-2021.
//

#include "DeclarationVisitor.h"
#include "ExpressionEvaluator.h"

#include <utility>

DeclarationVisitor::DeclarationVisitor(std::shared_ptr<SymbolTable> symbolTableRef) : symbolTable(
        std::move(symbolTableRef)) {}

antlrcpp::Any DeclarationVisitor::visitProgram(SlangGrammarParser::ProgramContext *ctx) {
    return SlangGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any DeclarationVisitor::visitBlock(SlangGrammarParser::BlockContext *ctx) {
    symbolTable->incrementScope();
    auto blockVisited = SlangGrammarBaseVisitor::visitBlock(ctx);
    symbolTable->decrementScope();
    return blockVisited;
}

antlrcpp::Any DeclarationVisitor::visitDeclStmt(SlangGrammarParser::DeclStmtContext *ctx) {
    auto idName = ctx->IDENTIFIER()->getSymbol()->getText();
    size_t firstAppearedLineNum = ctx->IDENTIFIER()->getSymbol()->getLine();
    auto typeNameCtx = ctx->typeName();

    if (typeNameCtx->BOOLTYPE() != nullptr) {
        BoolSymbol boolSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<BoolSymbol>(boolSymbol));
    }
    else if (typeNameCtx->INTTYPE() != nullptr) {
        IntSymbol intSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<IntSymbol>(intSymbol));
    }
    else if (typeNameCtx->STRINGTYPE() != nullptr) {
        StringSymbol stringSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<StringSymbol>(stringSymbol));
    }
    else if (typeNameCtx->VOIDTYPE() != nullptr) {
        // No support yet for void variables
        // TODO: throw error and abort for void type variable
        // What are they even supposed to do, lol
        std::cerr << "[Error, Line " << firstAppearedLineNum << "] ";
        std::cerr << "Void types for variable declarations are not supported!" << std::endl;
        exit(-1);
    }
    return SlangGrammarBaseVisitor::visitDeclStmt(ctx);
}

antlrcpp::Any DeclarationVisitor::visitNormalDeclAssignStmt(SlangGrammarParser::NormalDeclAssignStmtContext *ctx) {
    auto idName = ctx->IDENTIFIER()->getSymbol()->getText();
    size_t firstAppearedLineNum = ctx->IDENTIFIER()->getSymbol()->getLine();
    auto typeNameCtx = ctx->typeName();

    if (typeNameCtx->BOOLTYPE() != nullptr) {
        BoolSymbol boolSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<BoolSymbol>(boolSymbol));
    }
    else if (typeNameCtx->INTTYPE() != nullptr) {
        IntSymbol intSymbol(idName, firstAppearedLineNum);
        ExpressionEvaluator<int> evaluator(symbolTable);
        int value = evaluator.evaluate(ctx->expr());
        intSymbol.value = value;
        symbolTable->insert(idName, std::make_shared<IntSymbol>(intSymbol));
    }
    else if (typeNameCtx->STRINGTYPE() != nullptr) {
        StringSymbol stringSymbol(idName, firstAppearedLineNum);

        auto value = visit(ctx->expr());

        if (!value.is<std::string>()) {
            // TODO: throw error and halt for assigning non-string value to a string value
            std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
            std::cerr << "Cannot assign non-string value to a string variable." << std::endl;
            exit(-1);
        }

        std::string stringVal = value.as<std::string>();
        stringSymbol.value = stringVal;
        symbolTable->insert(idName, std::make_shared<StringSymbol>(stringSymbol));
    }
    else if (typeNameCtx->VOIDTYPE() != nullptr) {
        // No support yet for void variables
        // TODO: throw error and abort for no support of void variables
        // Lol what are they even supposed to be
        std::cerr << "[Error, Line " << firstAppearedLineNum << "] ";
        std::cerr << "Void types for variable declarations are not supported!" << std::endl;
        exit(-1);
    }
    return SlangGrammarBaseVisitor::visitNormalDeclAssignStmt(ctx);
}

antlrcpp::Any DeclarationVisitor::visitBooleanDeclAssignStmt(SlangGrammarParser::BooleanDeclAssignStmtContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanDeclAssignStmt(ctx);
}

antlrcpp::Any DeclarationVisitor::visitExprAssign(SlangGrammarParser::ExprAssignContext *ctx) {
    auto idName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(idName);

    // TODO: do we want an auto type of keyword?

    if (symbol == nullptr) {
        // TODO: throw error and halt because of assignment to unknown symbol
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Assignment to previously undeclared symbol." << std::endl;
        exit(-1);
    }

    if (symbol->isSymbolType(SymbolType::STRING)) {
        std::shared_ptr<StringSymbol> stringSymbol = std::dynamic_pointer_cast<StringSymbol>(symbol);
        auto value = visit(ctx->expr());

        if (!value.is<std::string>()) {
            // TODO: throw error and halt for assigning non-string value to a string value
            std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
            std::cerr << "Cannot assign non-string value to a string variable." << std::endl;
            exit(-1);
        }

        std::string stringVal = value.as<std::string>();
        stringSymbol->value = stringVal;
    }

    else if (symbol->isSymbolType(SymbolType::INT)) {
        std::shared_ptr<IntSymbol> intSymbol = std::dynamic_pointer_cast<IntSymbol>(symbol);
        ExpressionEvaluator<int> evaluator(symbolTable);
        int value = evaluator.evaluate(ctx->expr());
        intSymbol->value = value;
    }

    return SlangGrammarBaseVisitor::visitExprAssign(ctx);
}

antlrcpp::Any DeclarationVisitor::visitBooleanExprAssign(SlangGrammarParser::BooleanExprAssignContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprAssign(ctx);
}
