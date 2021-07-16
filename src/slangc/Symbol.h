//
// Created by suore on 16-07-2021.
//

#ifndef SLANG_SYMBOL_H
#define SLANG_SYMBOL_H

#include <string>
#include <utility>
#include <vector>
#include <memory>

/* TODO: Support array declarations and constants */
enum TypeTag {
    ARRAY_TAG, CONST_TAG
};
enum SymbolType {
    FUNCTION, INT, STRING, VOID
};

class Symbol {
public:
    std::string name;
    std::vector<TypeTag> typeTags;
    std::vector<int> lineNumbers;
    int firstAppearedLine = -1;

    Symbol() = default;

    explicit Symbol(std::string name);

    Symbol(std::string name, int firstAppearedLine);

    virtual bool isSymbolType(SymbolType tag) = 0;

    bool hasTypeTag(TypeTag tag);
};

/* Function name */
class FunctionSymbol : public Symbol {
public:
    SymbolType returnType;
    std::vector<std::shared_ptr<Symbol>> paramList;

    FunctionSymbol(std::string name, int firstAppearedLine);

    FunctionSymbol(std::string name, int firstAppearedLine, std::vector<std::shared_ptr<Symbol>> paramList);

    FunctionSymbol(std::string name, int firstAppearedLine, std::vector<std::shared_ptr<Symbol>> paramList,
                   SymbolType returnType);

    bool isSymbolType(SymbolType tag) override;
};

/* Integer Symbol */
class IntSymbol : public Symbol {
public:
    int value = 0xDEAD;

    IntSymbol(std::string name, int firstAppearedLine);

    IntSymbol(std::string name, int firstAppearedLine, int value);

    bool isSymbolType(SymbolType tag) override;
};

/* String Symbol */
class StringSymbol : public Symbol {
public:
    std::string value = "lawl";

    StringSymbol(std::string name, int firstAppearedLine);

    StringSymbol(std::string name, int firstAppearedLine, std::string value);

    bool isSymbolType(SymbolType tag) override;
};

#endif //SLANG_SYMBOL_H
