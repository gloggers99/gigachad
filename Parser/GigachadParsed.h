//
// Created by lucas on 6/17/22.
//

#ifndef PARSER_GIGACHADPARSED_H_
#define PARSER_GIGACHADPARSED_H_

#include <vector>
#include <string>

struct GigachadParsed {
    std::string projectName;
    std::string compiler, compilerFlags;
    std::vector<std::string> sources;
    std::string compilerFormat;
    std::vector<std::string> projectAuthors;
    std::vector<std::string> binaryNames;
    std::string mainBinary;
};

#endif // PARSER_GIGACHADPARSED_H_
