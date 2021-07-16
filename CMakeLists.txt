cmake_minimum_required(VERSION 3.7)
project(slang)

set(CMAKE_CXX_STANDARD 17)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

# required if linking to static library
add_definitions(-DANTLR4CPP_STATIC)

# using /MD flag for antlr4_runtime (for Visual C++ compilers only)
set(ANTLR4_WITH_STATIC_CRT OFF)
# add external build for antlr4cpp
include(ExternalAntlr4Cpp)
# add antlr4cpp artifacts to project environment
include_directories(${ANTLR4_INCLUDE_DIRS})

# set variable pointing to the antlr tool that supports C++
# this is not required if the jar file can be found under PATH environment
set(ANTLR_EXECUTABLE ${CMAKE_CURRENT_SOURCE_DIR}/tools/antlr-4.9.2-complete.jar)
# add macros to generate ANTLR Cpp code from grammar
find_package(ANTLR REQUIRED)

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(SlangGrammarParser ${PROJECT_SOURCE_DIR}/src/grammar/SlangGrammar.g4 OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/src/antlrgen VISITOR)

#antlr_target(SlangParser SlangGrammar.g4 PARSER VISITOR
#        PACKAGE slang
#        DEPENDS_ANTLR SlangLexer
#        OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/libs
#        COMPILE_FLAGS -lib ${ANTLR_SlangLexer_OUTPUT_DIR})

# include generated files in project environment
# include_directories(${ANTLR_SlangLexer_OUTPUT_DIR})
include_directories(${ANTLR_SlangGrammarParser_OUTPUT_DIR})

## LLVM
# Set a command line option to cmake: -DLLVM_DIR=<llvm installation directory>

message(${LLVM_DIR})
find_package(LLVM REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
message(STATUS "LLVM include dir is: ${LLVM_INCLUDE_DIRS}")
add_definitions(${LLVM_DEFINITIONS})

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

# add generated grammar to demo binary target
add_executable(slangc src/main.cpp
        ${ANTLR_SlangGrammarParser_CXX_OUTPUTS} src/slangc/SymbolTable.cpp src/slangc/SymbolTable.h src/slangc/DeclarationVisitor.cpp src/slangc/DeclarationVisitor.h)
target_link_libraries(slangc antlr4_static)
