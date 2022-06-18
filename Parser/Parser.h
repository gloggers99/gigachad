//
// Created by lucas on 6/17/22.
//

#ifndef GIGACHAD_PARSER_H
#define GIGACHAD_PARSER_H

#include <iostream>
#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

#include "GigachadParsed.h"

class Parser {
private:
    GigachadParsed output;
    void errorOut() { std::cout << "Config file isn't written right.\n"; exit(1); }

public:
    Parser(std::string inputFile);
    GigachadParsed getOutput() { return this->output; }
    ~Parser();
};


#endif //GIGACHAD_PARSER_H
