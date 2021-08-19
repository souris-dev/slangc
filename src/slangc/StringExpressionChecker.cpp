//
// Created by suore on 04-08-2021.
//

#include "StringExpressionChecker.h"

#include <utility>

StringExpressionChecker::StringExpressionChecker(std::shared_ptr<SymbolTable> symbolTable)
        : ExpressionChecker(std::move(symbolTable)) {

}
