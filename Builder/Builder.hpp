#pragma once

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
