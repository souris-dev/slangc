//
// Created by suore on 14-07-2021.
//

#include <iostream>
#include "SymbolTable.h"

bool SymbolTable::insert(const std::string &name, std::shared_ptr<Symbol> symbol) {
    if (symbolScope[currentScope].count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    symbolScope[currentScope].insert({name, std::move(symbol)});
    return true;
}

bool SymbolTable::deleteSymbol(const std::string &name) {
    if (symbolScope[currentScope].count(name) > 0) {
        symbolScope[currentScope].erase(name);
        return true;
    }

    return false;
}

std::shared_ptr<Symbol> SymbolTable::lookup(const std::string &name) {
    /* Search for a symbol till you find it in a scope */
    int tempScope = currentScope;

    while (tempScope >= 0 && symbolScope[tempScope].count(name) == 0) {
        tempScope--;
    }

    /* Either the present tempScope should have that identifier here, otherwise tempScope < 0 */
    if (tempScope < 0) {
        if (symbolScope[0].count(name) > 0) {
            return symbolScope[0][name];
        } else {
            return nullptr;
        }
    } else {
        size_t n = symbolScope[tempScope].count(name);
        if (n > 0) {
            return symbolScope[tempScope][name];
        } else {
            return nullptr;
        }
    }
}

void SymbolTable::incrementScope() {
    if (currentScope == (symbolScope.size() - 1)) {
        std::unordered_map<std::string, std::shared_ptr<Symbol>> newTable;
        symbolScope.push_back(newTable);
    }
    currentScope++;
}

void SymbolTable::decrementScope(bool deleteSymbols) {
    if (currentScope != 0) {
        if (deleteSymbols) {
            destroyLastScopeVars();
        }
        currentScope--;
    }
}

void SymbolTable::setCurrentScope(const int &scopeVal) {
    if (scopeVal < symbolScope.size() - 1 && scopeVal >= 0) {
        currentScope = scopeVal;
    }
}

void SymbolTable::destroyLastScopeVars() {
    /* TODO: CodeGen - deallocate these variables too */
    symbolScope.pop_back();
}

bool SymbolTable::modify(const std::string &name, std::shared_ptr<Symbol> replaceByThisSymbol) {
    auto currentTable = std::make_shared<std::unordered_map<std::string, std::shared_ptr<Symbol>>>
            (symbolScope[currentScope]);
    if (currentTable->count(name) > 0) {
        (*currentTable)[name] = std::move(replaceByThisSymbol);
        return true;
    }

    return false;
}

void SymbolTable::dump() {
    int scopeval = 0;
    for (const auto &table : symbolScope) {
        std::cout << "---Scope " << scopeval << "---" << std::endl;

        for (const auto &entry : table) {
            std::cout << entry.first << std::endl;
        }
        scopeval++;
    }
}

SymbolTable::SymbolTable() {
    std::unordered_map<std::string, std::shared_ptr<Symbol>> globalTable;
    symbolScope.push_back(globalTable);
}
