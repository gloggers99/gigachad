//
// Created by lucas on 6/18/22.
//

#include "Parser.h"

Parser::Parser(std::string inputFile) {
    std::ifstream file(inputFile);


    /* extract config settings */
    nlohmann::json configJson;
    file >> configJson;

    this->output.projectName = configJson["name"];
    this->output.compiler = configJson["compiler"];
    this->output.compilerFlags = configJson["compilerFlags"];
    //this->output.sources = configJson["sources"];

    nlohmann::json authors = configJson["authors"];

    for (auto author = authors.begin(); author != authors.end(); author++) {
        this->output.projectAuthors.push_back(author.value());
    }

    nlohmann::json sources = configJson["sources"];

    for (auto source = sources.begin(); source != sources.end(); source++) {
        this->output.sources.push_back(source.value());

    }
}

Parser::~Parser() {

}