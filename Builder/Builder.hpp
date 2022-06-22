#ifndef BUILDER_BUILDER_HPP_
#define BUILDER_BUILDER_HPP_

#include <cstdlib>
#include <iostream>
#include <string>

#include "../Parser/GigachadParsed.hpp"

class Builder {
 private:
    GigachadParsed project;

    std::string assembleCompileCommand();
 public:
    explicit Builder(GigachadParsed project);
    ~Builder();
};


#endif // BUILDER_BUILDER_HPP_
