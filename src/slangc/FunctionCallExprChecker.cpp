//
// Created by suore on 04-08-2021.
//

#include "FunctionCallExprChecker.h"

antlrcpp::Any FunctionCallExprChecker::visitFunctionCallWithArgs(SlangGrammarParser::FunctionCallWithArgsContext *ctx,
                                                                 const std::shared_ptr<SymbolTable>& symbolTable) {
    // lookup and return the return type of the function symbol here
    // TODO: also check passed arguments and their types
    auto funcIdName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(funcIdName);

    if (symbol == nullptr) {
        // TODO: throw error and halt for identifier not found
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Unknown identifier: " << funcIdName << std::endl;
        exit(-1);
    }

    if (symbol->getSymbolType() != SymbolType::FUNCTION) {
        // TODO: throw error and halt for calling a non-function identifier
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Cannot call " << funcIdName << " as a function. It is not a function. " << std::endl;
        exit(-1);
    }

    std::shared_ptr<FunctionSymbol> functionSymbol = std::dynamic_pointer_cast<FunctionSymbol>(symbol);
    bool calledParamsOk = parseAndCheckParamList(ctx, functionSymbol, symbolTable);

    if (!calledParamsOk) {
        // passed parameter types do not match
        return nullptr;
    }

    return functionSymbol->returnType;
}

antlrcpp::Any FunctionCallExprChecker::visitFunctionCallNoArgs(SlangGrammarParser::FunctionCallNoArgsContext *ctx,
                                                               const std::shared_ptr<SymbolTable>& symbolTable) {
    // lookup and return the return type of the function symbol here
    auto funcIdName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(funcIdName);

    if (symbol == nullptr) {
        // TODO: throw error and halt for identifier not found
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Unknown identifier: " << funcIdName << std::endl;
        exit(-1);
    }

    if (symbol->getSymbolType() != SymbolType::FUNCTION) {
        // TODO: throw error and halt for calling a non-function identifier
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Cannot call " << funcIdName << " as a function. It is not a function. " << std::endl;
        exit(-1);
    }

    std::shared_ptr<FunctionSymbol> functionSymbol = std::dynamic_pointer_cast<FunctionSymbol>(symbol);
    return functionSymbol->returnType;
}

bool FunctionCallExprChecker::parseAndCheckParamList(SlangGrammarParser::FunctionCallWithArgsContext *ctx,
                                                     const std::shared_ptr<FunctionSymbol> &functionSymbol,
                                                     const std::shared_ptr<SymbolTable>& symbolTable) {

    // The call argument list has two parts: normal call parameters and boolean expression call parameters
    auto argListUnprocessed = ctx->callArgList()->callParams;
    auto booleanArgListUnprocessed = ctx->callArgList()->booleanCallParams;
    std::string funcName = ctx->IDENTIFIER()->getText();

    auto funcExpectedParamList = functionSymbol->paramList;

    size_t totalArgsPassed = argListUnprocessed.size() + booleanArgListUnprocessed.size();
    if (funcExpectedParamList.size() != totalArgsPassed) {
        // TODO: throw error for unequal sized argument lists and terminate
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Need " << funcExpectedParamList.size() << " arguments for a call to " << funcName;
        std::cerr << ", but only " << totalArgsPassed << " arguments were passed. " << std::endl;
        exit(-1);
    }

    bool allParamTypesOk = true;

    // these two help use keep track of current array indices
    // of the two parts of the argument lists
    int currentPassedArg = 0;
    int currentBooleanPassedArg = 0;

    for (int i = 0; i < totalArgsPassed; i++) {
        std::unique_ptr<ExpressionChecker> expressionChecker;
        std::string expectedType;
        switch (funcExpectedParamList[i]->getSymbolType()) {
            case SymbolType::INT: {
                expressionChecker = std::make_unique<IntExpressionChecker>(symbolTable);
                expectedType = "int";
                break;
            }

            case SymbolType::STRING: {
                expressionChecker = std::make_unique<StringExpressionChecker>(symbolTable);
                expectedType = "string";
                break;
            }

            case SymbolType::BOOL: {
                expressionChecker = std::make_unique<BoolExpressionChecker>(symbolTable);
                expectedType = "bool";
                break;
            }

            case SymbolType::VOID:
                break;

            case FUNCTION:
                break;
        }

        bool paramTypeOk = false;

        if (funcExpectedParamList[i]->getSymbolType() == SymbolType::BOOL) {
            // BoolExpressionChecker has a different overload of checkExpr
            // that takes a BooleanExprContext*

            // The line below can look quite complicated but does the following:
            // Create a BoolExpressionChecker& from which we can create a unique_ptr
            // In the process, we want the ownership of the unique_ptr expressionChecker
            // to also be transferred to the argument of dynamic_cast

            std::unique_ptr<BoolExpressionChecker> boolExpressionChecker
                = std::make_unique<BoolExpressionChecker>(
                        dynamic_cast<BoolExpressionChecker&>(*std::move(expressionChecker)));

            // Note: dynamic_pointer_cast exists for shared_ptr, and not for unique_ptr

            paramTypeOk = boolExpressionChecker->checkExpr(booleanArgListUnprocessed[currentBooleanPassedArg]).as<bool>();
            currentBooleanPassedArg++;
        }
        else {
            // For other types of arguments (i.e., other than boolean)
            paramTypeOk = expressionChecker->checkExpr(argListUnprocessed[currentPassedArg]).as<bool>();
            currentPassedArg++;
        }

        allParamTypesOk = allParamTypesOk && paramTypeOk;
        if (!paramTypeOk) {
            // TODO: show error for mismatch of expression return type and expected type
            std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
            std::cerr << "Expected type of argument in call to " << funcName << " was " << expectedType;
            std::cerr << " but received expression of different type. " << std::endl;
        }
    }

    return allParamTypesOk;
}
