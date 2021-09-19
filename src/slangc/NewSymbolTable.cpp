//
// Created by suore on 19-09-2021.
//

#include "NewSymbolTable.h"

NewSymbolTable::NewSymbolTable() {
    // initialize a global scope
    SymbolTableRecordEntry globalEntry(nullptr);

    // single global entry
    symbolScope.push_back(std::vector<std::shared_ptr<SymbolTableRecordEntry>>(
            {std::make_shared<SymbolTableRecordEntry>(globalEntry)}));
    currentSymbolTableRecord = std::make_shared<SymbolTableRecordEntry>(globalEntry);
}

bool NewSymbolTable::insert(const std::string &name, const std::shared_ptr<Symbol> &symbol) {
    if (currentSymbolTableRecord->table.count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    currentSymbolTableRecord->table.insert({name, symbol});
    return true;
}

void NewSymbolTable::incrementScope() {
    SymbolTableRecordEntry newSymbolTableRecord(currentSymbolTableRecord);
    if (currentScopeIndex == (symbolScope.size() - 1)) {
        symbolScope.push_back(std::vector<std::shared_ptr<SymbolTableRecordEntry>>(
                {std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord)}));
    } else {
        // implies that scope was decreased previously
        // but, we are still entering a new blank scope when entering a block
        symbolScope[currentScopeIndex + 1].push_back(std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord));
    }

    currentSymbolTableRecord = std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord);
    currentScopeIndex++;
}

void NewSymbolTable::decrementScope() {
    if (currentScopeIndex != 0 && currentSymbolTableRecord->prevScopeTable != nullptr) {
        currentScopeIndex--;
        currentSymbolTableRecord = currentSymbolTableRecord->prevScopeTable;
    }
}

void NewSymbolTable::setCurrentScope(const int &scopeVal) {

}

std::shared_ptr<Symbol> NewSymbolTable::lookup(const std::string &name) {
    /* Search for a symbol till you find it in a scope */
    auto tempScope = currentSymbolTableRecord;

    // start from current scope and keep moving outwards
    while (tempScope != nullptr && tempScope->table.count(name) == 0) {
        tempScope = tempScope->prevScopeTable;
    }

    if (tempScope == nullptr) {
        // not found in any scope
        return nullptr;
    }
    else {
        return tempScope->table[name];
    }
}

void NewSymbolTable::dump() {

}
