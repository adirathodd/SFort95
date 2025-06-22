# SFort95 Language Interpreter

This repository contains the source code for a lexical analyzer, parser, and interpreter for a custom language referred to as SFort95 or SPL (likely a simplified Fortran-like language). The project is designed to process and execute programs written in this language.

## Project Structure and Files

* **`lex.h` / `lex.cpp`**:
    * **`lex.h`**: Defines the `Token` enum, which lists all possible token types in the SFort95 language (keywords, identifiers, constants, operators, delimiters). It also declares the `LexItem` class, representing a token with its type, lexeme, and line number.
    * **`lex.cpp`**: Implements the lexical analyzer. It contains the `id_or_kw` function to identify keywords or identifiers and the `getNextToken` function, which reads the input stream and breaks it down into individual tokens.

* **`parserInterp.h` / `parserInterp.cpp`**:
    * **`parserInterp.h`**: This header file declares the functions for the parser and interpreter. These functions define the grammar rules for the SFort95 language, such as `Prog`, `Decl`, `Stmt`, `Expr`, `RelExpr`, `MultExpr`, `TermExpr`, `SFactor`, and `Factor`. It also includes declarations for symbol tables and value queues used during interpretation.
    * **`parserInterp.cpp`**: Implements the recursive-descent parser and interpreter for the SFort95 language. It includes functions for handling declarations, statements (print, if, assign), and expressions, as well as managing variable definitions, symbol tables, and expression results.

* **`val.h` / `val.cpp`**:
    * **`val.h`**: Defines the `Value` class, which is used to represent different data types (integer, real, string, boolean, and error) within the interpreter. It provides methods for type checking and accessing the stored values.
    * **`val.cpp`**: Implements the overloaded operators for the `Value` class, enabling arithmetic operations (`+`, `-`, `*`, `/`, `**` for power), string concatenation (`//`), and relational comparisons (`==`, `<`, `>`) between different value types.

* **`parser.cpp`**: This file appears to be an earlier or alternative implementation of a recursive-descent parser for SFort95, similar to `parserInterp.cpp` but without the explicit interpretation logic related to `Value` objects and `TempsResults` map for storing variable values. It focuses solely on syntactic analysis.

* **`prog3.cpp`**: This is the main driver program for the interpreter. It handles command-line arguments to open and read a source file. It then calls the `Prog` function (from `parserInterp.h/cpp`) to initiate the parsing and interpretation process, reporting whether the execution was successful or if errors occurred.

## How to Compile and Run

To compile this project, you would typically use a C++ compiler like g++. Assuming all `.cpp` and `.h` files are in the same directory, you can compile them together:

```bash
g++ prog3.cpp lex.cpp parserInterp.cpp val.cpp -o sfort95_interpreter
