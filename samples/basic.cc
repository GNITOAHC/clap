#include "../include/clap.h"
#include <iostream>

const std::string clapParams = "Program: clap_example\n"
                               "Version: 0.1.0\n"
                               "Description: A simple example of clap usage\n"
                               "-h, --help Print help message\n"
                               "-p, --param <param:int> A int parameter\n"
                               "-f, --flag A flag parameter\n";

int main (int argc, char *argv[]) {
    clap::Clap c(clapParams);
    int iter = 0;

    c.parse(argc, argv, iter);

    if (c.hasArg("help")) {
        c.help();
        return 0;
    }

    if (c.hasArg("param")) {
        int param = std::get<int>(c.getArg("param")[0]);
        std::cout << "Param is set to " << param << std::endl;
    }

    if (c.hasArg("flag")) { std::cout << "Flag is set" << std::endl; }

    return 0;
}
