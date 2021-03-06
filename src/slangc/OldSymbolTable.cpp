//
// Created by suore on 14-07-2021.
//

#include <iostream>
#include "OldSymbolTable.h"

bool OldSymbolTable::insert(const std::string &name, const std::shared_ptr<Symbol>& symbol) {
    if (symbolScope[currentScope].count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    symbolScope[currentScope].insert({name, symbol});
    return true;
}

bool OldSymbolTable::deleteSymbol(const std::string &name) {
    if (symbolScope[currentScope].count(name) > 0) {
        symbolScope[currentScope].erase(name);
        return true;
    }

    return false;
}

std::shared_ptr<Symbol> OldSymbolTable::lookup(const std::string &name) {
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

void OldSymbolTable::incrementScope() {
    if (currentScope == (symbolScope.size() - 1)) {
        std::unordered_map<std::string, std::shared_ptr<Symbol>> newTable;
        symbolScope.push_back(newTable);
    }
    currentScope++;
}

void OldSymbolTable::decrementScope(bool deleteSymbols) {
    if (currentScope != 0) {
        if (deleteSymbols) {
            destroyLastScopeVars();
        }
        currentScope--;
    }
}

void OldSymbolTable::setCurrentScope(const int &scopeVal) {
    if (scopeVal < symbolScope.size() - 1 && scopeVal >= 0) {
        currentScope = scopeVal;
    }
}

void OldSymbolTable::destroyLastScopeVars() {
    /* TODO: CodeGen - deallocate these variables too */
    symbolScope.pop_back();
}

bool OldSymbolTable::modify(const std::string &name, std::shared_ptr<Symbol> replaceByThisSymbol) {
    auto currentTable = std::make_shared<std::unordered_map<std::string, std::shared_ptr<Symbol>>>
            (symbolScope[currentScope]);
    if (currentTable->count(name) > 0) {
        (*currentTable)[name] = std::move(replaceByThisSymbol);
        return true;
    }

    return false;
}

void OldSymbolTable::dump() {
    int scopeval = 0;
    for (const auto &table : symbolScope) {
        std::cout << "---Scope " << scopeval << "---" << std::endl;

        for (const auto &entry : table) {
            std::cout << entry.first << std::endl;
        }
        scopeval++;
    }
}

OldSymbolTable::OldSymbolTable() {
    std::unordered_map<std::string, std::shared_ptr<Symbol>> globalTable;
    symbolScope.push_back(globalTable);
}
