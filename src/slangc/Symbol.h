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
    FUNCTION, INT, STRING, BOOL, VOID
};

class SymbolUtils {
public:
    static std::string getSymbolTypeAsString(const SymbolType& symbolType);

    static bool canTypeBeUsedWithRelOp(const SymbolType& symbolType);

    static bool canTypeBeUsedWithCompOp(const SymbolType& symbolType);
};

class Symbol {
public:
    std::string name;
    std::vector<TypeTag> typeTags;
    std::vector<int> lineNumbers;
    size_t firstAppearedLine = -1;

    Symbol() = default;

    explicit Symbol(std::string name);

    Symbol(std::string name, size_t firstAppearedLine);

    virtual bool isSymbolType(SymbolType tag) = 0;

    virtual SymbolType getSymbolType() = 0;

    virtual std::string getSymbolTypeAsString() = 0;

    bool hasTypeTag(TypeTag tag);
};

/* Function name */
class FunctionSymbol : public Symbol {
public:
    SymbolType returnType = SymbolType::VOID;
    std::vector<std::shared_ptr<Symbol>> paramList;

    FunctionSymbol(std::string name, size_t firstAppearedLine);

    FunctionSymbol(std::string name, size_t firstAppearedLine, std::vector<std::shared_ptr<Symbol>> paramList);

    FunctionSymbol(std::string name, size_t firstAppearedLine, std::vector<std::shared_ptr<Symbol>> paramList,
                   SymbolType returnType);

    bool isSymbolType(SymbolType tag) override;

    SymbolType getSymbolType() override;

    std::string getSymbolTypeAsString() override;
};

/* Integer Symbol */
class IntSymbol : public Symbol {
public:
    int value = 0xDEAD;

    IntSymbol(std::string name, size_t firstAppearedLine);

    IntSymbol(std::string name, size_t firstAppearedLine, int value);

    bool isSymbolType(SymbolType tag) override;

    SymbolType getSymbolType() override;

    std::string getSymbolTypeAsString() override;
};

/* String Symbol */
class StringSymbol : public Symbol {
public:
    std::string value = "lawl";

    StringSymbol(std::string name, size_t firstAppearedLine);

    StringSymbol(std::string name, size_t firstAppearedLine, std::string value);

    bool isSymbolType(SymbolType tag) override;

    SymbolType getSymbolType() override;

    std::string getSymbolTypeAsString() override;
};

/* Bool Symbol */
class BoolSymbol : public Symbol {
public:
    bool value = true;

    BoolSymbol(std::string name, size_t firstAppearedLine);

    BoolSymbol(std::string name, size_t firstAppearedLine, bool value);

    bool isSymbolType(SymbolType tag) override;

    SymbolType getSymbolType() override;

    std::string getSymbolTypeAsString() override;
};

#endif //SLANG_SYMBOL_H
