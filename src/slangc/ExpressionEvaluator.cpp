//
// Created by suore on 17-07-2021.
//

#include "ExpressionEvaluator.h"
#include <utility>

// TODO: add new datatypes for type checking when they are added

template<class T>
T ExpressionEvaluator<T>::evaluate(SlangGrammarParser::ExprContext *ctx) {
    // Performs iterative inorder traversal to use a stack machine for evaluation
    // NOTE: Only for arithmetic and boolean operations
    // Templated because I'll probably add more numeric datatypes like float etc. later on
    // TODO: remove the below condition when new datatypes are added

    if (!std::is_same<T, int>::value) {
        std::cerr << "[Error] Compiler error! ExpressionEvaluator::evaluate called for non-int return value."
                  << std::endl;

        exit(-1);
    }

    return visit(ctx).template as<T>();
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) {
    // Unary minus is defined only for numeric types
    // TODO: add more types here
    if (!std::is_same<T, int>::value) {
        // TODO: throw error and abort because of incompatible types
        std::cout << "[Error, line " << ctx->MINUS()->getSymbol()->getLine() << "] ";
        std::cout << "Unary minus is only defined for numeric types." << std::endl;
        exit(-1);
    } else {
        T operand = visit(ctx->expr()).template as<T>();
        return (-operand);
    }
}

template<>
antlrcpp::Any ExpressionEvaluator<std::string>::visitUnaryMinus(SlangGrammarParser::UnaryMinusContext *ctx) {
    // Unary minus is defined only for numeric types
    // TODO: add more types here

    // TODO: throw error and abort because of incompatible types
    std::cout << "[Error, line " << ctx->MINUS()->getSymbol()->getLine() << "] ";
    std::cout << "Unary minus is only defined for numeric types (attempted on string)." << std::endl;
    exit(-1);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) {
    // Division is defined only for numeric types
    // TODO: add more types here
    if (!std::is_same<T, int>::value) {
        // TODO: throw error and abort because of incompatible types
        std::cout << "[Error, line " << ctx->DIVIDE()->getSymbol()->getLine() << "] ";
        std::cout << "Division is only defined for numeric types." << std::endl;
        exit(-1);
    }

    T left = visit(ctx->expr(0)).template as<T>();
    T right = visit(ctx->expr(1)).template as<T>();

    if (std::is_same<T, int>::value && right == 0) {
        // TODO: throw error and abort because of division by 0
        // TODO: handle this in a better way
        std::cout << "[Error, line " << ctx->DIVIDE()->getSymbol()->getLine() << "] ";
        std::cout << "Division by 0 is not permitted." << std::endl;
        exit(-1);
    }

    return (left / right);
}

template<>
antlrcpp::Any ExpressionEvaluator<std::string>::visitExprDivide(SlangGrammarParser::ExprDivideContext *ctx) {
    // Division is defined only for numeric types
    // TODO: throw error and abort because of incompatible types
    std::cout << "[Error, line " << ctx->DIVIDE()->getSymbol()->getLine() << "] ";
    std::cout << "Division is only defined for numeric types (attempted on string)." << std::endl;
    exit(-1);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) {
    // For now, multiplication is defined only for numeric types
    // Support for string types may be added soon
    // TODO: add more types here
    if (!std::is_same<T, int>::value) {
        // TODO: throw error and abort because of incompatible types
        std::cout << "[Error, line " << ctx->MULT()->getSymbol()->getLine() << "] ";
        std::cout << "Multiplication is only defined for numeric types as of now." << std::endl;
        exit(-1);
    }

    T left = visit(ctx->expr(0)).template as<T>();
    T right = visit(ctx->expr(1)).template as<T>();

    return (left * right);
}

template<>
antlrcpp::Any ExpressionEvaluator<std::string>::visitExprMultiply(SlangGrammarParser::ExprMultiplyContext *ctx) {
    // For now, multiplication is defined only for numeric types
    // Support for string types may be added soon

    // TODO: throw error and abort because of incompatible types
    std::cout << "[Error, line " << ctx->MULT()->getSymbol()->getLine() << "] ";
    std::cout << "Multiplication is only defined for numeric types as of now (attempted on string)." << std::endl;
    exit(-1);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprModulo(SlangGrammarParser::ExprModuloContext *ctx) {
    return SlangGrammarBaseVisitor::visitExprModulo(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprPlus(SlangGrammarParser::ExprPlusContext *ctx) {
    // For now, addition is defined only for numeric types
    // Support for string types may be added soon
    // TODO: add more types here
    if (!std::is_same<T, int>::value) {
        // TODO: throw error and abort because of incompatible types
        std::cout << "[Error, line " << ctx->PLUS()->getSymbol()->getLine() << "] ";
        std::cout << "Addition is only defined for numeric types as of now." << std::endl;
        exit(-1);
    }

    T left = visit(ctx->expr(0)).template as<T>();
    T right = visit(ctx->expr(1)).template as<T>();

    return (left + right);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) {
    // Since substraction is defined only for numeric types
    // TODO: add more types here
    if (!std::is_same<T, int>::value) {
        // TODO: throw error and abort because of incompatible types
        std::cout << "[Error, line " << ctx->MINUS()->getSymbol()->getLine() << "] ";
        std::cout << "Subtracting is only defined for numeric types." << std::endl;
        exit(-1);
    }

    T left = visit(ctx->expr(0)).template as<T>();
    T right = visit(ctx->expr(1)).template as<T>();

    return (left - right);
}

template <>
antlrcpp::Any ExpressionEvaluator<std::string>::visitExprMinus(SlangGrammarParser::ExprMinusContext *ctx) {
    // Since substraction is defined only for numeric types

    // TODO: throw error and abort because of incompatible types
    std::cout << "[Error, line " << ctx->MINUS()->getSymbol()->getLine() << "] ";
    std::cout << "Subtracting is only defined for numeric types (attempted on string)." << std::endl;
    exit(-1);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprParen(SlangGrammarParser::ExprParenContext *ctx) {
    return visit(ctx->expr());
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprIdentifier(SlangGrammarParser::ExprIdentifierContext *ctx) {
    // Resolve and return

    auto idName = ctx->IDENTIFIER()->getText();
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(idName);

    if (symbol == nullptr) {
        // TODO: throw error and terminate because symbol was not found
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "The identifier " << idName << " has not been defined or declared before." << std::endl;
        exit(-1);
    }

    // Perform type checking of the return type of the expression and the identifier
    if (std::is_same<T, int>::value && symbol->isSymbolType(SymbolType::INT)) {
        std::shared_ptr<IntSymbol> intSymbol = std::dynamic_pointer_cast<IntSymbol>(symbol);
        return intSymbol->value;
    }
        // TODO: when more datatypes are added, add typechecking for them too
    else {
        // TODO: Throw error for wrong type
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "The identifier " << idName << " has a type mismatch with the expected result of the expression."
                  << std::endl;
        exit(-1);
    }
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprDecint(SlangGrammarParser::ExprDecintContext *ctx) {
    return std::stoi(ctx->DECINT()->getText());
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitExprString(SlangGrammarParser::ExprStringContext *ctx) {
    return ctx->STRING()->getText();
}

template<class T>
void ExpressionEvaluator<T>::evaluateBooleanExpr(SlangGrammarParser::BooleanExprContext *ctx) {

}

template<class T>
void ExpressionEvaluator<T>::evaluateFunctionCallExpr(SlangGrammarParser::FunctionCallContext *ctx) {

}

template<class T>
ExpressionEvaluator<T>::ExpressionEvaluator(std::shared_ptr<SymbolTable> symbolTable) :
        symbolTable(std::move(symbolTable)) {}


// TODO: add more types here when ExpressionEvaluator supports them
// For why this line is here, check out:
// https://isocpp.org/wiki/faq/templates#separate-template-fn-defn-from-decl
// (This basically prevents linker errors.)
template
class ExpressionEvaluator<int>;

template
class ExpressionEvaluator<std::string>;