//
// Created by suore on 14-07-2021.
//

#include "SymbolTable.h"

bool SymbolTable::insert(const std::string& name, Symbol symbol) {
    if (tableData.count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    tableData[name] = std::move(symbol);
    return true;
}

std::shared_ptr<Symbol> SymbolTable::getOrCreate(const std::string& name) {
    if (tableData.count(name) > 0) {
        tableData[name] = Symbol("", BLOCK_BODY);
    }

    return std::make_shared<Symbol>(tableData[name]);
}

bool SymbolTable::deleteSymbol(const std::string& name) {
    if (tableData.count(name) > 0) {
        tableData.erase(name);
        return true;
    }

    return false;
}

bool SymbolTable::modify(const std::string& name, Symbol replaceByThisSymbol) {
    if (tableData.count(name) > 0) {
        tableData[name] = std::move(replaceByThisSymbol);
        return true;
    }

    return false;
}

std::shared_ptr<Symbol> SymbolTable::get(const std::string& name) {
    return std::make_shared<Symbol>(tableData[name]);
}

std::shared_ptr<std::unordered_map<std::string, Symbol>> SymbolTable::getInternalTablePtr() {
    return std::make_shared<std::unordered_map<std::string, Symbol>>(tableData);
}

void Symbol::addToTypeCollection(TypeDecl typeDecl) {
    typeCollection.push_back(typeDecl);
}
