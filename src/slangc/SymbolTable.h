//
// Created by suore on 19-09-2021.
//

#ifndef SLANG_SYMBOLTABLE_H
#define SLANG_SYMBOLTABLE_H

#include <utility>
#include <vector>
#include <unordered_map>
#include <string>
#include "Symbol.h"

class SymbolTableRecordEntry {
public:
    std::shared_ptr<SymbolTableRecordEntry> prevScopeTable;
    std::unordered_map<std::string, std::shared_ptr<Symbol>> table;

    SymbolTableRecordEntry(std::shared_ptr<SymbolTableRecordEntry> prevScopeTable,
                           std::unordered_map<std::string, std::shared_ptr<Symbol>> table)
                           : prevScopeTable(std::move(prevScopeTable)), table(std::move(table)) {};

    explicit SymbolTableRecordEntry(std::shared_ptr<SymbolTableRecordEntry> prevScopeTable)
                            : prevScopeTable(std::move(prevScopeTable)),
                              table(std::unordered_map<std::string, std::shared_ptr<Symbol>>()) {};
};

class SymbolTable {
private:
    std::vector<std::vector<std::shared_ptr<SymbolTableRecordEntry>>> symbolScope;
    int currentScopeIndex = 0;
    std::shared_ptr<SymbolTableRecordEntry> currentSymbolTableRecord;
    bool createNewScopeEntryOnIncrement = true;

public:
    SymbolTable();

    bool insert(const std::string &name, const std::shared_ptr<Symbol>& symbol);

    void incrementScope();

    void decrementScope(bool createNewScopeEntryOnNextIncrement = true);

    void setCurrentScope(const int &scopeVal);

    std::shared_ptr<Symbol> lookup(const std::string &name);

    [[maybe_unused]] void dump();
};


#endif //SLANG_SYMBOLTABLE_H
