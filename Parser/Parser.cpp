//
// Created by lucas on 6/18/22.
//

#include "Parser.hpp"

Parser::Parser(std::string inputFile) {
    std::ifstream file(inputFile);


    /* extract config settings */
    nlohmann::json configJson;
    file >> configJson;

    try { this->output.projectName = configJson["name"]; } catch (std::exception &e) {}
    try { this->output.compiler = configJson["compiler"]; } catch (std::exception &e) {}
    try { this->output.compilerFlags = configJson["compilerFlags"]; } catch (std::exception &e) {}
    try { this->output.mainBinary = configJson["mainBinary"]; } catch (std::exception &e) {}
    try { this->output.compilerFormat = configJson["compilerFormat"]; } catch (std::exception &e) {}

    try {
        nlohmann::json binaryNames = configJson["binaryNames"];

        for (auto binary = binaryNames.begin(); binary != binaryNames.end(); binary++) {
            this->output.binaryNames.push_back(binary.value());
        }
    } catch (std::exception &e) {}

    try {
        nlohmann::json authors = configJson["authors"];

        for (auto author = authors.begin(); author != authors.end(); author++) {
            this->output.projectAuthors.push_back(author.value());
        }
    } catch (std::exception &e) {}

    try {
        nlohmann::json sources = configJson["sources"];

        for (auto source = sources.begin(); source != sources.end(); source++) {
            this->output.sources.push_back(source.value());
        }
    } catch (std::exception &e) {}
}

Parser::~Parser() = default;
