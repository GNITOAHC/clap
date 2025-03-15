#include "../include/clap.h"
#include <iostream>

const std::string clapParams =
    "Program: main\n"
    "Version: 0.1.0\n"
    "Description: A simple command line argument parser\n"
    "-h, --help Print help message\n"
    "-o, --optional <optional1:int> <optional2:int>... Optional argument test\n"
    "-t, --tau <tau:int> Step count\n"
    "[G1][M]Mutex arguments group\n"
    "[1]-q, --qubo Transform the input into QUBO form\n"
    "[1]-f, --file <file:string> The input file path\n"
    "[G2]Long arguments group\n"
    "[2]--only-long <long-opt-1:int> <long-opt-2:int>... Only long argument test\n"
    "<subcommand_a>\n"
    "<subcommand_b>\n";

int main (int argc, char *argv[]) {
    clap::Clap c(clapParams);
    int iter = 0;

    c.parse(argc, argv, iter);

    if (c.hasArg("help")) {
        c.help();
        return 0;
    }

    if (c.hasArg("optional")) {
        int optional = std::get<int>(c.getArg("optional")[2]);
        std::cout << "Optional arguments: " << optional << std::endl;
    }

    return 0;
}
