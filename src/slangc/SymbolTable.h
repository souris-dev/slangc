//
// Created by suore on 14-07-2021.
//

#ifndef SLANG_SYMBOLTABLE_H
#define SLANG_SYMBOLTABLE_H

#include <unordered_map>
#include <map>
#include <string>
#include <utility>
#include <vector>
#include <memory>

#include "Symbol.h"

class SymbolTable {
private:
    std::vector<std::unordered_map<std::string, std::shared_ptr<Symbol>>> symbolScope;
    int currentScope = 0;

    void destroyLastScopeVars();

public:
    SymbolTable();

    bool insert(const std::string &name, const std::shared_ptr<Symbol>& symbol);

    void incrementScope();

    void decrementScope(bool deleteSymbols = true);

    void setCurrentScope(const int &scopeVal);

    std::shared_ptr<Symbol> lookup(const std::string &name);

    [[maybe_unused]] bool deleteSymbol(const std::string &name);

    [[maybe_unused]] bool modify(const std::string &name, std::shared_ptr<Symbol> replaceByThisSymbol);

    [[maybe_unused]] void dump();
};


#endif //SLANG_SYMBOLTABLE_H
