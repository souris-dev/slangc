//
// Created by suore on 16-07-2021.
//

#include <algorithm>
#include <utility>
#include "Symbol.h"

/* Symbol methods */

Symbol::Symbol(std::string name) : name(std::move(name)), firstAppearedLine(-1) {}

Symbol::Symbol(std::string name, size_t firstAppearedLine) : name(std::move(name)),
                                                             firstAppearedLine(firstAppearedLine) {}

inline bool Symbol::hasTypeTag(TypeTag tag) {
    return (std::find(typeTags.begin(), typeTags.end(), tag) != typeTags.end());
}


/* FunctionSymbol methods */

FunctionSymbol::FunctionSymbol(std::string name, size_t firstAppearedLine) : Symbol(std::move(name), firstAppearedLine),
                                                                             returnType(SymbolType::VOID) {}

inline bool FunctionSymbol::isSymbolType(SymbolType tag) {
    return (tag == SymbolType::FUNCTION);
}

inline SymbolType FunctionSymbol::getSymbolType() {
    return SymbolType::FUNCTION;
}

FunctionSymbol::FunctionSymbol(std::string name, size_t firstAppearedLine,
                               std::vector<std::shared_ptr<Symbol>> paramList) : Symbol(std::move(name),
                                                                                        firstAppearedLine),
                                                                                 paramList(std::move(paramList)),
                                                                                 returnType(SymbolType::VOID) {

}

FunctionSymbol::FunctionSymbol(std::string name, size_t firstAppearedLine,
                               std::vector<std::shared_ptr<Symbol>> paramList,
                               SymbolType returnType) : Symbol(std::move(name),
                                                               firstAppearedLine),
                                                        paramList(std::move(paramList)),
                                                        returnType(returnType) {

}

std::string FunctionSymbol::getSymbolTypeAsString() {
    return "function";
}


/* IntSymbol methods */

IntSymbol::IntSymbol(std::string name, size_t firstAppearedLine) : Symbol(std::move(name), firstAppearedLine) {}

IntSymbol::IntSymbol(std::string name, size_t firstAppearedLine, int value) : Symbol(std::move(name),
                                                                                     firstAppearedLine),
                                                                              value(value) {}

bool IntSymbol::isSymbolType(SymbolType tag) {
    return (tag == SymbolType::INT);
}

inline SymbolType IntSymbol::getSymbolType() {
    return SymbolType::INT;
}

std::string IntSymbol::getSymbolTypeAsString() {
    return "int";
}

/* StringSymbol methods */

StringSymbol::StringSymbol(std::string name, size_t firstAppearedLine) : Symbol(std::move(name), firstAppearedLine) {}

StringSymbol::StringSymbol(std::string name, size_t firstAppearedLine, std::string value) : Symbol(std::move(name),
                                                                                                   firstAppearedLine),
                                                                                            value(std::move(value)) {}

bool StringSymbol::isSymbolType(SymbolType tag) {
    return (tag == SymbolType::STRING);
}

inline SymbolType StringSymbol::getSymbolType() {
    return SymbolType::STRING;
}

std::string StringSymbol::getSymbolTypeAsString() {
    return "string";
}

/* BoolSymbol methods */

BoolSymbol::BoolSymbol(std::string name, size_t firstAppearedLine) : Symbol(std::move(name), firstAppearedLine) {}

BoolSymbol::BoolSymbol(std::string name, size_t firstAppearedLine, bool value) : Symbol(std::move(name),
                                                                                        firstAppearedLine),
                                                                                 value(value) {}

bool BoolSymbol::isSymbolType(SymbolType tag) {
    return (tag == SymbolType::BOOL);
}

inline SymbolType BoolSymbol::getSymbolType() {
    return SymbolType::BOOL;
}

std::string BoolSymbol::getSymbolTypeAsString() {
    return "bool";
}

std::string SymbolUtils::getSymbolTypeAsString(const SymbolType &symbolType) {
    std::string retVal;

    switch(symbolType) {
        case SymbolType::INT:
            retVal = "int";
            break;
        case SymbolType::FUNCTION:
            retVal = "function";
            break;
        case SymbolType::STRING:
            retVal = "string";
            break;
        case SymbolType::BOOL:
            retVal = "bool";
            break;
        case SymbolType::VOID:
            retVal = "void";
            break;
    }

    return retVal;
}

bool SymbolUtils::canTypeBeUsedWithRelOp(const SymbolType &symbolType) {
    bool canDo = false;

    // TODO: modify when new types are added or relops are supported for more types
    switch(symbolType) {
        case SymbolType::INT:
            canDo = true;
            break;
        case SymbolType::FUNCTION:
            canDo = false;
            break;
        case SymbolType::STRING:
            canDo = false;
            break;
        case SymbolType::BOOL:
            canDo = false;
            break;
        case SymbolType::VOID:
            canDo = false;
            break;
    }
    return canDo;
}

bool SymbolUtils::canTypeBeUsedWithCompOp(const SymbolType &symbolType) {
    bool canDo = false;

    // TODO: modify when new types are added or relops are supported for more types
    switch(symbolType) {
        case SymbolType::INT:
            canDo = true;
            break;
        case SymbolType::FUNCTION:
            canDo = false;
            break;
        case SymbolType::STRING:
            canDo = true;
            break;
        case SymbolType::BOOL:
            canDo = true;
            break;
        case SymbolType::VOID:
            canDo = false;
            break;
    }
    return canDo;
}
