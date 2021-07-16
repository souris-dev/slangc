//
// Created by suore on 14-07-2021.
//

#ifndef SLANG_SYMBOLTABLE_H
#define SLANG_SYMBOLTABLE_H

#include <unordered_map>
#include <string>
#include <utility>
#include <vector>
#include <memory>

class TypeDecl {

};

class Symbol {
public:
    std::string name;
    std::vector<TypeDecl> typeCollection;

    Symbol() = default;
    explicit Symbol(std::string name);
    void addToTypeCollection(TypeDecl typeDecl);
};

class SymbolTable {
private:
    std::vector<std::unordered_map<std::string, Symbol>> symbolScope;
    int currentScope = 0;

    void destroyLastScopeVars();

public:
    bool insert(const std::string& name, Symbol symbol);
    void incrementScope();
    void decrementScope();
    void setCurrentScope(const int& scopeVal);
    std::shared_ptr<Symbol> lookup(const std::string& name);

    [[maybe_unused]] std::shared_ptr<Symbol> getOrCreate(const std::string&);
    [[maybe_unused]] bool deleteSymbol(const std::string& name);
    [[maybe_unused]] bool modify(const std::string& name, Symbol replaceByThisSymbol);
};


#endif //SLANG_SYMBOLTABLE_H
