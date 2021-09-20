//
// Created by suore on 19-09-2021.
//

#include "SymbolTable.h"

SymbolTable::SymbolTable() {
    // initialize a global scope
    SymbolTableRecordEntry globalEntry(nullptr);

    // single global entry
    symbolScope.push_back(std::vector<std::shared_ptr<SymbolTableRecordEntry>>(
            {std::make_shared<SymbolTableRecordEntry>(globalEntry)}));
    currentSymbolTableRecord = std::make_shared<SymbolTableRecordEntry>(globalEntry);
}

bool SymbolTable::insert(const std::string &name, const std::shared_ptr<Symbol> &symbol) {
    if (currentSymbolTableRecord->table.count(name) > 0) {
        // Entry exists already so return false
        return false;
    }

    currentSymbolTableRecord->table.insert({name, symbol});
    return true;
}

void SymbolTable::incrementScope() {
    SymbolTableRecordEntry newSymbolTableRecord(currentSymbolTableRecord);
    if (currentScopeIndex == (symbolScope.size() - 1)) {
        symbolScope.push_back(std::vector<std::shared_ptr<SymbolTableRecordEntry>>(
                {std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord)}));
        currentSymbolTableRecord = std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord);
    } else {
        // implies that scope was decreased previously

        if (createNewScopeEntryOnIncrement) {
            // create a new scope entry when increasing the scope
            symbolScope[currentScopeIndex + 1].push_back(std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord));
            currentSymbolTableRecord = std::make_shared<SymbolTableRecordEntry>(newSymbolTableRecord);
        }
        else {
            // get the last scope entry in the next scope
            currentSymbolTableRecord = *symbolScope[currentScopeIndex + 1].end();
            createNewScopeEntryOnIncrement = true; // reset this flag
        }
    }

    currentScopeIndex++;
}

void SymbolTable::decrementScope(bool createNewScopeOnNextIncrement) {
    if (currentScopeIndex != 0 && currentSymbolTableRecord->prevScopeTable != nullptr) {
        currentScopeIndex--;
        currentSymbolTableRecord = currentSymbolTableRecord->prevScopeTable;
    }

    createNewScopeEntryOnIncrement = createNewScopeOnNextIncrement;
}

void SymbolTable::setCurrentScope(const int &scopeVal) {

}

std::shared_ptr<Symbol> SymbolTable::lookup(const std::string &name) {
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

void SymbolTable::dump() {

}
