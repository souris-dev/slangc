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