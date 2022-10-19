//
// Created by lucas on 6/18/22.
//


#pragma once

#include <iostream>
#include <filesystem>
#include <string>

#include "../Colors.hpp"
#include "../Parser/GigachadParsed.hpp"

class Installer {
 private:
    GigachadParsed project;

    void fail(std::string msg) {
        std::cerr << RED << "Error during installing: " << RESET << msg << std::endl;
        exit(1);
    }

 public:
    explicit Installer(GigachadParsed project);
    ~Installer();
};
