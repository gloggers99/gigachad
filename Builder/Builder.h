#ifndef BUILDER_BUILDER_H_
#define BUILDER_BUILDER_H_

#include <cstdlib>
#include <iostream>
#include <string>

#include "../Parser/GigachadParsed.h"

class Builder {
 private:
    GigachadParsed project;

    std::string assembleCompileCommand();
 public:
    explicit Builder(GigachadParsed project);
    ~Builder();
};


#endif // BUILDER_BUILDER_H_
