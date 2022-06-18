//
// Created by lucas on 6/18/22.
//

#ifndef GIGACHAD_BUILDER_H
#define GIGACHAD_BUILDER_H

#include <cstdlib>

#include "../Parser/GigachadParsed.h"

class Builder {
private:
    GigachadParsed project;

    std::string assembleCompileCommand();
public:
    Builder(GigachadParsed project);
    ~Builder();
};


#endif //GIGACHAD_BUILDER_H
