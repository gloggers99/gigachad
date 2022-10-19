//
// Created by lucas on 6/17/22.
//

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <nlohmann/json.hpp>

#include "GigachadParsed.hpp"

class Parser {
 private:
    GigachadParsed output;
    void errorOut() { std::cout << "Config file isn't written right." << std::endl; exit(1); }

 public:
    explicit Parser(std::string inputFile);
    GigachadParsed getOutput() { return this->output; }
    ~Parser();
};
