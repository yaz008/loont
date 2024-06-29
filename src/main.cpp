#include <stdexcept>
#include <iostream>
#include <string>
#include "filemanip/open.hpp"

int main(int argc, char* argv[]) {
    if (argc == 1) throw std::runtime_error("Expected a file");

    std::string src = open(argv[1]);

    return 0;
}