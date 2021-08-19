//
// Created by suore on 04-08-2021.
//

#ifndef SLANG_STRINGEXPRESSIONCHECKER_H
#define SLANG_STRINGEXPRESSIONCHECKER_H

#include "ExpressionChecker.h"
#include "FunctionCallExprChecker.h"

class StringExpressionChecker : public ExpressionChecker {
public:
    explicit StringExpressionChecker(std::shared_ptr<SymbolTable> symbolTable);
};


#endif //SLANG_STRINGEXPRESSIONCHECKER_H
