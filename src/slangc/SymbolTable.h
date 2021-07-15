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

enum Scope { BLOCK_BODY, FUNCTION_PARAM, GLOBAL };

class TypeDecl {

};

class Symbol {
private:
    std::string name;
    Scope scope = Scope::GLOBAL;
    std::vector<TypeDecl> typeCollection;

public:
    Symbol(): scope(Scope::GLOBAL) {}
    Symbol(std::string name, Scope scope): name(std::move(name)), scope(scope) {}
    void addToTypeCollection(TypeDecl typeDecl);
};

class SymbolTable {
private:
    std::unordered_map<std::string, Symbol> tableData;

public:
    bool insert(const std::string& name, Symbol symbol);
    std::shared_ptr<Symbol> get(const std::string& name);

    [[maybe_unused]] std::shared_ptr<std::unordered_map<std::string, Symbol>> getInternalTablePtr();
    [[maybe_unused]] std::shared_ptr<Symbol> getOrCreate(const std::string&);
    [[maybe_unused]] bool deleteSymbol(const std::string& name);
    [[maybe_unused]] bool modify(const std::string& name, Symbol replaceByThisSymbol);
};


#endif //SLANG_SYMBOLTABLE_H
