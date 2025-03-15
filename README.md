# CLAP

A header only command line argument parser library for c++.

```cpp
const std::string clapParams =
    "Program: main\n"
    "Version: 0.1.0\n"
    "Description: A simple command line argument parser\n"
    "-o, --optional <optional1:int> <optional2:int>... Optional argument test\n"
    "-t, --tau <tau:int> Step count\n"
    "[G1][M]Mutex arguments group\n"
    "[1]-q, --qubo Transform the input into QUBO form\n"
    "[1]-f, --file <file:string> The input file path\n"
    "[G2]Long arguments group\n"
    "[2]--only-long <long-opt-1:int> <long-opt-2:int>... Only long argument test\n"
    "<subcommand_a>\n"
    "<subcommand_b>\n";
```
