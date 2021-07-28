//
// Created by suore on 17-07-2021.
//

#include "ExpressionEvaluator.h"
#include <utility>

// TODO: add new datatypes for type checking when they are added

// TODO: Add new template specializations for new datatypes
template<class T>
T ExpressionEvaluator<T>::evaluate(SlangGrammarParser::ExprContext *ctx) {
    // Performs iterative inorder traversal to use a stack machine for evaluation
    // NOTE: Only for arithmetic and boolean operations
    // Templated because I'll probably add more numeric datatypes like float etc. later on

    std::cerr << "[Error] Compiler error! ExpressionEvaluator::evaluate called for unsupported return value."
                << std::endl;

    exit(-1);
}

template<>
int ExpressionEvaluator<int>::evaluate(SlangGrammarParser::ExprContext *ctx) {
    return visit(ctx).as<int>();
}

template<>
bool ExpressionEvaluator<bool>::evaluate(SlangGrammarParser::ExprContext *ctx) {
    std::cerr << "[Error] Compiler error: Call the other overload of evaluate for evaluating boolean expressions.";
    std::cerr << std::endl;
    exit(-1);
}

template<>
bool ExpressionEvaluator<bool>::evaluate(SlangGrammarParser::BooleanExprContext *ctx) {
    return visit(ctx).as<bool>();
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

template<>
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
        std::cerr << "Unknown identifier: " << idName << "." << std::endl;
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

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprNot(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprAnd(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprOr(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprXor(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprRelOp(ctx);
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprCompOp(ctx);
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprNot(SlangGrammarParser::BooleanExprNotContext *ctx) {
    antlrcpp::Any operand = visit(ctx->booleanExpr());
    if (!operand.is<bool>()) {
        // TODO: throw error and halt for trying to not an inappropriate type
        std::cout << "[Error, Line " << ctx->LOGICALNOT()->getSymbol()->getLine() << "] ";
        std::cout << "Cannot perform logical NOT operation on non boolean value. I am not an emotional being. "
                  << std::endl;
        exit(-1);
    }

    return !(operand.as<bool>());
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprAnd(SlangGrammarParser::BooleanExprAndContext *ctx) {
    auto left = visit(ctx->booleanExpr(0));
    auto right = visit(ctx->booleanExpr(1));

    if (!left.is<bool>() || !right.is<bool>()) {
        // TODO: throw error and halt for trying to or inappropriate types
        std::cout << "[Error, Line " << ctx->LOGICALAND()->getSymbol()->getLine() << "] ";
        std::cout << "Cannot perform logical AND operation on non boolean values. I am not an emotional being. "
                  << std::endl;
        exit(-1);
    }

    return (left.as<bool>() && right.as<bool>());
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprOr(SlangGrammarParser::BooleanExprOrContext *ctx) {
    auto left = visit(ctx->booleanExpr(0));
    auto right = visit(ctx->booleanExpr(1));

    if (!left.is<bool>() || !right.is<bool>()) {
        // TODO: throw error and halt for trying to or inappropriate types
        std::cout << "[Error, Line " << ctx->LOGICALOR()->getSymbol()->getLine() << "] ";
        std::cout << "Cannot perform logical OR operation on non boolean values. I am not an emotional being. "
                  << std::endl;
        exit(-1);
    }

    return (left.as<bool>() || right.as<bool>());
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprXor(SlangGrammarParser::BooleanExprXorContext *ctx) {
    auto left = visit(ctx->booleanExpr(0));
    auto right = visit(ctx->booleanExpr(1));

    if (!left.is<bool>() || !right.is<bool>()) {
        // TODO: throw error and halt for trying to or inappropriate types
        std::cout << "[Error, Line " << ctx->LOGICALXOR()->getSymbol()->getLine() << "] ";
        std::cout << "Cannot perform logical and operation on non boolean value. I am not an emotional being. "
                  << std::endl;
        exit(-1);
    }

    bool leftBool = left.as<bool>();
    bool rightBool = right.as<bool>();

    return ((leftBool || rightBool) && !(leftBool && rightBool));
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprRelOp(SlangGrammarParser::BooleanExprRelOpContext *ctx) {
    auto throwMismatchedTypesError = [](size_t lineNumber, const std::string &typeOfRelOp) {
        // TODO: throw error on comparison of mismatched types and halt
        std::cerr << "[Error, Line " << lineNumber << "] ";
        std::cerr << "Cannot compare non numerical variables using the '" << typeOfRelOp << "' operator as of now.";
        std::cerr << std::endl;
        exit(-1);
    };

    auto left = visit(ctx->expr(0));
    auto right = visit(ctx->expr(1));

    bool badComparison = false;
    // TODO: add more numerical types here, not just int
    if (!(left.is<int>()) || !(right.is<int>())) {
        badComparison = true;
    }

    // Let's first determine which kind of relOp this is
    if (ctx->relOp()->LT() != nullptr) {
        if (badComparison) {
            throwMismatchedTypesError(ctx->relOp()->LT()->getSymbol()->getLine(), "<");
        }

        // TODO: add more numerical types
        return (left.as<int>() < right.as<int>());
    } else if (ctx->relOp()->GT() != nullptr) {
        if (badComparison) {
            throwMismatchedTypesError(ctx->relOp()->GT()->getSymbol()->getLine(), ">");
        }

        // TODO: add more numerical types
        return (left.as<int>() > right.as<int>());
    } else if (ctx->relOp()->LTEQ() != nullptr) {
        if (badComparison) {
            throwMismatchedTypesError(ctx->relOp()->LTEQ()->getSymbol()->getLine(), "<=");
        }

        // TODO: add more numerical types
        return (left.as<int>() <= right.as<int>());
    } else {
        if (badComparison) {
            throwMismatchedTypesError(ctx->relOp()->GTEQ()->getSymbol()->getLine(), ">=");
        }

        // TODO: add more numerical types
        return (left.as<int>() >= right.as<int>());
    }
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprCompOp(SlangGrammarParser::BooleanExprCompOpContext *ctx) {
    // TODO: merge this rule with exprRelOp?

    auto throwMismatchedTypesError = [](size_t lineNumber, const std::string &typeOfCompOp) {
        // TODO: throw error on comparison of mismatched types and halt
        std::cerr << "[Error, Line " << lineNumber << "] ";
        std::cerr << "Cannot compare given type of variables using the '" << typeOfCompOp << "' operator as of now.";
        std::cerr << std::endl;
        exit(-1);
    };

    auto left = visit(ctx->expr(0));
    auto right = visit(ctx->expr(1));

    bool badComparison = false;
    // TODO: add more numerical types here, not just int
    if (!(left.is<int>()) || !(right.is<int>())) {
        badComparison = true;
    }

    // Let's first determine which kind of relOp this is
    if (ctx->compOp()->COMP() != nullptr) {
        if (badComparison) {
            throwMismatchedTypesError(ctx->compOp()->COMP()->getSymbol()->getLine(), "==");
        }

        // TODO: add more numerical types
        return (left.as<int>() < right.as<int>());
    } else {
        if (badComparison) {
            throwMismatchedTypesError(ctx->compOp()->COMPNOTEQ()->getSymbol()->getLine(), "!=");
        }

        // TODO: add more numerical types
        return (left.as<int>() > right.as<int>());
    }
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprParen(ctx);
}

template<>
antlrcpp::Any ExpressionEvaluator<bool>::visitBooleanExprParen(SlangGrammarParser::BooleanExprParenContext *ctx) {
    return visit(ctx->booleanExpr());
}

template<class T>
antlrcpp::Any
ExpressionEvaluator<T>::visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanExprIdentifier(ctx);
}

template<>
antlrcpp::Any
ExpressionEvaluator<bool>::visitBooleanExprIdentifier(SlangGrammarParser::BooleanExprIdentifierContext *ctx) {
    std::shared_ptr<Symbol> symbol = symbolTable->lookup(ctx->IDENTIFIER()->getText());

    if (symbol == nullptr) {
        // TODO: throw error and halt for using an unknown identifier
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Unknown identifier: " << ctx->IDENTIFIER()->getText() << std::endl;
        exit(-1);
    }

    if (symbol->getSymbolType() != SymbolType::BOOL) {
        // TODO: throw error and halt for using non boolean identifier for boolean expression
        std::cerr << "[Error, Line " << ctx->IDENTIFIER()->getSymbol()->getLine() << "] ";
        std::cerr << "Cannot use a non boolean type in a boolean expression. " << std::endl;
        exit(-1);
    }

    // lookup and return the value
    std::shared_ptr<BoolSymbol> boolSymbol = std::dynamic_pointer_cast<BoolSymbol>(symbol);
    return boolSymbol->value;
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanTrue(SlangGrammarParser::BooleanTrueContext *ctx) {
    return true;
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanFalse(SlangGrammarParser::BooleanFalseContext *ctx) {
    return false;
}

template<class T>
antlrcpp::Any ExpressionEvaluator<T>::visitBooleanFunctionCall(SlangGrammarParser::BooleanFunctionCallContext *ctx) {
    return SlangGrammarBaseVisitor::visitBooleanFunctionCall(ctx);
}


// TODO: add more types here when ExpressionEvaluator supports them
// For why this line is here, check out:
// https://isocpp.org/wiki/faq/templates#separate-template-fn-defn-from-decl
// (This basically prevents linker errors.)
template
class ExpressionEvaluator<int>;

template
class ExpressionEvaluator<std::string>;

template
class ExpressionEvaluator<bool>;