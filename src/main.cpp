#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "antlrgen/SlangGrammarLexer.h"
#include "antlrgen/SlangGrammarParser.h"
#include "slangc/DeclarationVisitor.h"
#include "slangc/SymbolTable.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "slangc: No input files.";
        return -1;
    }

    std::ifstream inputStream;
    std::string inputFile(argv[1]);

    try {
        inputStream.open(inputFile);
    } catch (const std::ifstream::failure& e) {
        std::cerr << "slangc: Could not open/read input file.";
        return -1;
    }

    antlr4::ANTLRInputStream antlrInputStream(inputStream);
    SlangGrammarLexer lexer(&antlrInputStream);
    antlr4::CommonTokenStream tokenStream(&lexer);
    SlangGrammarParser parser(&tokenStream);

    SlangGrammarParser::ProgramContext* tree = parser.program();

    std::shared_ptr<SymbolTable> symbolTablePtr(new SymbolTable());

    std::cout << "Visiting declarations..." << std::endl;
    DeclarationVisitor declarationVisitor(symbolTablePtr);
    declarationVisitor.visit(tree);

    std::cout << "Dumping table: " << std::endl;
    symbolTablePtr->dump();
}
