//
// Created by lucas on 6/17/22.
//

#ifndef PARSER_PARSER_H_
#define PARSER_PARSER_H_

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <nlohmann/json.hpp>

#include "GigachadParsed.h"

class Parser {
 private:
    GigachadParsed output;
    void errorOut() { std::cout << "Config file isn't written right.\n"; exit(1); }

 public:
    explicit Parser(std::string inputFile);
    GigachadParsed getOutput() { return this->output; }
    ~Parser();
};


#endif // PARSER_PARSER_H_
