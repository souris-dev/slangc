//
// Created by suore on 14-07-2021.
//

#include "SymbolTable.h"

bool SymbolTable::insert(const std::string& name, Symbol symbol) {
    auto currentTable = symbolScope[currentScope];
    if (currentTable.count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    currentTable[name] = std::move(symbol);
    return true;
}

std::shared_ptr<Symbol> SymbolTable::getOrCreate(const std::string& name) {
    auto currentTable = symbolScope[currentScope];
    if (currentTable.count(name) > 0) {
        currentTable[name] = Symbol("");
    }

    return std::make_shared<Symbol>(currentTable[name]);
}

bool SymbolTable::deleteSymbol(const std::string& name) {
    auto currentTable = symbolScope[currentScope];
    if (currentTable.count(name) > 0) {
        currentTable.erase(name);
        return true;
    }

    return false;
}

bool SymbolTable::modify(const std::string& name, Symbol replaceByThisSymbol) {
    auto currentTable = symbolScope[currentScope];
    if (currentTable.count(name) > 0) {
        currentTable[name] = std::move(replaceByThisSymbol);
        return true;
    }

    return false;
}

std::shared_ptr<Symbol> SymbolTable::lookup(const std::string& name) {
    /* Search for a symbol till you find it in a scope */
    int tempScope = currentScope;

    auto currentTable = symbolScope[tempScope];
    while (currentTable.count(name) != 0 && tempScope >= 0) {
        tempScope--;
        currentTable = symbolScope[tempScope];
    }

    /* Either the present tempScope should have that identifier here, otherwise tempScope < 0 */
    if (tempScope < 0) {
        return nullptr;
    }
    else {
        return std::make_shared<Symbol>(currentTable[name]);
    }
}

void SymbolTable::incrementScope() {
    if (currentScope == (symbolScope.size() - 1)) {
        std::unordered_map<std::string, Symbol> newTable;
        symbolScope.push_back(newTable);
        currentScope++;
    }
    currentScope++;
}

void SymbolTable::decrementScope() {
    if (currentScope != 0) {
        destroyLastScopeVars();
        currentScope--;
    }
}

void SymbolTable::setCurrentScope(const int& scopeVal) {
    if (scopeVal < symbolScope.size() - 1 && scopeVal >= 0) {
        currentScope = scopeVal;
    }
}

void SymbolTable::destroyLastScopeVars() {
    /* TODO: CodeGen - deallocate these variables too */
    symbolScope.pop_back();
}

Symbol::Symbol(std::string name): name(std::move(name)) {}

void Symbol::addToTypeCollection(TypeDecl typeDecl) {
    typeCollection.push_back(typeDecl);
}
