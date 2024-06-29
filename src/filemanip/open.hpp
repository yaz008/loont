#pragma once
#include <stdexcept>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

std::string open(const char* path) {
    std::ifstream file(path);
    if (file.is_open()) {
        std::stringstream buffer;
        buffer << file.rdbuf();
        return buffer.str();
    }
    else {
        std::string error = "Unable to open: ";
        throw std::runtime_error(error + path);
    }
}