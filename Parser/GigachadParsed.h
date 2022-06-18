//
// Created by lucas on 6/17/22.
//

#ifndef GIGACHAD_GIGACHADPARSED_H
#define GIGACHAD_GIGACHADPARSED_H

#include <string>

struct GigachadParsed {
    std::string projectName, projectAuthor;
    std::string compiler, compilerFlags;
    std::string sources;
};

#endif //GIGACHAD_GIGACHADPARSED_H
