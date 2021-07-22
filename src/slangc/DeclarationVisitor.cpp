//
// Created by suore on 15-07-2021.
//

#include "DeclarationVisitor.h"
#include "ExpressionEvaluator.h"

#include <utility>

DeclarationVisitor::DeclarationVisitor(std::shared_ptr<SymbolTable> symbolTableRef) : symbolTable(
        std::move(symbolTableRef)) {}

antlrcpp::Any DeclarationVisitor::visitProgram(SlangGrammarParser::ProgramContext *ctx) {
    std::cout << "Visiting program..." << std::endl; // debug
    return SlangGrammarBaseVisitor::visitProgram(ctx);
}

antlrcpp::Any DeclarationVisitor::visitBlock(SlangGrammarParser::BlockContext *ctx) {
    std::cout << "Visiting block..." << std::endl; // debug
    symbolTable->incrementScope();
    auto blockVisited = SlangGrammarBaseVisitor::visitBlock(ctx);
    symbolTable->decrementScope();
    return blockVisited;
}

antlrcpp::Any DeclarationVisitor::visitDeclStmt(SlangGrammarParser::DeclStmtContext *ctx) {
    std::cout << "Visiting declstmt..." << std::endl; // debug
    auto idName = ctx->IDENTIFIER()->getSymbol()->getText();
    size_t firstAppearedLineNum = ctx->IDENTIFIER()->getSymbol()->getLine();
    auto typeNameCtx = ctx->typeName();

    if (typeNameCtx->BOOLTYPE() != nullptr) {
        std::cout << "Found bool type for id " << idName << std::endl;
        BoolSymbol boolSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<BoolSymbol>(boolSymbol));
    } else if (typeNameCtx->INTTYPE() != nullptr) {
        std::cout << "Found int type for id " << idName << std::endl;
        IntSymbol intSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<IntSymbol>(intSymbol));
    } else if (typeNameCtx->STRINGTYPE() != nullptr) {
        std::cout << "Found string type for id " << idName << std::endl;
        StringSymbol stringSymbol(idName, firstAppearedLineNum);
        symbolTable->insert(idName, std::make_shared<StringSymbol>(stringSymbol));
    } else if (typeNameCtx->VOIDTYPE() != nullptr) {
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
    } else if (typeNameCtx->INTTYPE() != nullptr) {
        IntSymbol intSymbol(idName, firstAppearedLineNum);
        ExpressionEvaluator<int> evaluator(symbolTable);
        int value = evaluator.evaluate(ctx->expr());
        intSymbol.value = value;
        symbolTable->insert(idName, std::make_shared<IntSymbol>(intSymbol));
    } else if (typeNameCtx->STRINGTYPE() != nullptr) {
        StringSymbol stringSymbol(idName, firstAppearedLineNum);

        // TODO: this looks so weird doesn't it lol
        ExpressionEvaluator<int> evaluator(symbolTable);
        antlrcpp::Any value = evaluator.visit(ctx->expr());

        std::string stringVal;

        try {
            stringVal = value.as<std::string>();
        } catch (const std::bad_cast &e) {
            // TODO: throw error and halt for assigning non-string value to a string value
            std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
            std::cerr << "Cannot assign non-string value to a string variable." << std::endl;
            exit(-1);
        }

        stringSymbol.value = stringVal;
        symbolTable->insert(idName, std::make_shared<StringSymbol>(stringSymbol));
    } else if (typeNameCtx->VOIDTYPE() != nullptr) {
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

        std::string stringVal;
        try {
            stringVal = value.as<std::string>();
        } catch (const std::bad_cast &e) {
            // TODO: throw error and halt for assigning non-string value to a string value
            std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
            std::cerr << "Cannot assign non-string value to a string variable." << std::endl;
            exit(-1);
        }

        stringSymbol->value = stringVal;
    } else if (symbol->isSymbolType(SymbolType::INT)) {
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

antlrcpp::Any DeclarationVisitor::visitImplicitRetTypeFuncDef(SlangGrammarParser::ImplicitRetTypeFuncDefContext *ctx) {
    auto funcIdName = ctx->IDENTIFIER()->getText();
    auto definedLineNum = ctx->IDENTIFIER()->getSymbol()->getLine();
    std::vector<std::shared_ptr<Symbol>> paramList =
            parseAndAddFunctionParams<SlangGrammarParser::ImplicitRetTypeFuncDefContext>(ctx);

    FunctionSymbol functionSymbol(funcIdName, definedLineNum, paramList, SymbolType::VOID);
    symbolTable->insert(funcIdName, std::make_shared<FunctionSymbol>(functionSymbol));

    return SlangGrammarBaseVisitor::visitImplicitRetTypeFuncDef(ctx);
}

antlrcpp::Any DeclarationVisitor::visitExplicitRetTypeFuncDef(SlangGrammarParser::ExplicitRetTypeFuncDefContext *ctx) {
    auto funcIdName = ctx->IDENTIFIER()->getText();
    auto definedLineNum = ctx->IDENTIFIER()->getSymbol()->getLine();
    std::vector<std::shared_ptr<Symbol>> paramList =
            parseAndAddFunctionParams<SlangGrammarParser::ExplicitRetTypeFuncDefContext>(ctx);

    SymbolType funcReturnType;

    if (ctx->typeName()->INTTYPE() != nullptr) {
        funcReturnType = SymbolType::INT;
    }
    else if (ctx->typeName()->STRINGTYPE() != nullptr) {
        funcReturnType = SymbolType::STRING;
    }
    else if (ctx->typeName()->BOOLTYPE() != nullptr) {
        funcReturnType = SymbolType::BOOL;
    }
    else {
        funcReturnType = SymbolType::VOID;
    }

    FunctionSymbol functionSymbol(funcIdName, definedLineNum, paramList, funcReturnType);
    symbolTable->insert(funcIdName, std::make_shared<FunctionSymbol>(functionSymbol));

    return SlangGrammarBaseVisitor::visitExplicitRetTypeFuncDef(ctx);
}

template<class T>
std::vector<std::shared_ptr<Symbol>> DeclarationVisitor::parseAndAddFunctionParams(T *ctx) {
    std::vector<std::shared_ptr<Symbol>> paramList(ctx->funcArgList()->args.size());

    std::transform(ctx->funcArgList()->args.begin(), ctx->funcArgList()->args.end(), paramList.begin(),
                   [this](SlangGrammarParser::ArgParamContext *argContext) -> std::shared_ptr<Symbol> {
                       auto idName = argContext->IDENTIFIER()->getText();
                       auto definedOnLineNum = argContext->IDENTIFIER()->getSymbol()->getLine();
                       auto typeNameCtx = argContext->typeName();

                       /* We increment the scope once here and decrement it again after inserting the
                        * symbols in the parameter list (while not deleting the new scope variables).
                        * The decrement is necessary because when the compiler enters the block, it will
                        * increment its scope again. We want the parameters to stay. */

                       this->symbolTable->incrementScope();

                       if (typeNameCtx->INTTYPE() != nullptr) {
                           IntSymbol intSymbol(idName, definedOnLineNum);
                           this->symbolTable->insert(idName, std::make_shared<IntSymbol>(intSymbol));
                           this->symbolTable->decrementScope(false); // do not delete the new scope's symbols
                           return std::make_shared<IntSymbol>(intSymbol);
                       }
                       else if (typeNameCtx->STRINGTYPE() != nullptr) {
                           StringSymbol stringSymbol(idName, definedOnLineNum);
                           this->symbolTable->insert(idName, std::make_shared<StringSymbol>(stringSymbol));
                           this->symbolTable->decrementScope(false); // do not delete the new scope's symbols
                           return std::make_shared<StringSymbol>(stringSymbol);
                       }
                       else if (typeNameCtx->BOOLTYPE() != nullptr) {
                           BoolSymbol boolSymbol(idName, definedOnLineNum);
                           this->symbolTable->insert(idName, std::make_shared<BoolSymbol>(boolSymbol));
                           this->symbolTable->decrementScope(false); // do not delete the new scope's symbols
                           return std::make_shared<BoolSymbol>(boolSymbol);
                       }
                       else if (typeNameCtx->VOIDTYPE() != nullptr) {
                           // TODO: throw error and halt because void variables are not supported
                           // Lol what are void variables anyway
                           std::cerr << "[Error, Line " << argContext->IDENTIFIER()->getSymbol()->getLine() << "] ";
                           std::cerr << "Void type variables are not supported. What did you even expect?" << std::endl;
                           exit(-1);
                       }
                       else {
                           /* we shouldn't reach here because the parser won't parse
                              any other keyword */
                           return nullptr;
                       }
                   });

    return paramList;
}
