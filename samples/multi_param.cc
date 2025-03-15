#include "../include/clap.h"
#include <iostream>

const std::string clapParams = "Program: clap_example\n"
                               "Version: 0.1.0\n"
                               "Description: A simple example of clap usage\n"
                               "-h, --help Print help message\n"
                               "-m, --multi <a:int> <b:int> Multiple int parameter\n"
                               "-o, --optional <a:int>... Optional int parameters\n";

int main (int argc, char *argv[]) {
    clap::Clap c(clapParams);
    int iter = 0;

    std::cout << "check point 1\n";

    c.parse(argc, argv, iter);

    std::cout << "check point 2\n";

    if (c.hasArg("help")) {
        c.help();
        return 0;
    }

    if (c.hasArg("multi")) {
        // int a = std::get<int>(c.getArg("multi")[0]);
        // int b = std::get<int>(c.getArg("multi")[1]);
        // std::cout << "a is set to " << a << " and b is set to " << b << std::endl;
    }

    if (c.hasArg("optional")) {
        // for (const auto& o : c.getArg("optional")) {
        //     std::cout << std::get<int>(o) << std::endl;
        // }
    }

    return 0;
}
