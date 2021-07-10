#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "antlrgen/SlangGrammarLexer.h"
#include "antlrgen/SlangGrammarParser.h"
#include "antlrgen/SlangGrammarBaseVisitor.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cerr << "slangc: No input files.";
        return -1;
    }

    std::ifstream inputStream;
    std::string inputFile(argv[1]);

    inputStream.open(inputFile);

    antlr4::ANTLRInputStream antlrInputStream(inputStream);
    SlangGrammarLexer lexer(&antlrInputStream);
    antlr4::CommonTokenStream tokenStream(&lexer);
    SlangGrammarParser parser(&tokenStream);

    SlangGrammarParser::ProgramContext* tree = parser.program();
    SlangGrammarBaseVisitor visitor;
}
