//
// Created by lucas on 6/18/22.
//


#ifndef INSTALLER_INSTALLER_HPP_
#define INSTALLER_INSTALLER_HPP_

#include <iostream>
#include <filesystem>
#include <string>

#include "../Colors.hpp"
#include "../Parser/GigachadParsed.hpp"

class Installer {
 private:
    GigachadParsed project;

    void fail(std::string msg) {
        std::cout << RED << "Error during installing: " << RESET << msg << "\n";
        exit(1);
    }

 public:
    explicit Installer(GigachadParsed project);
    ~Installer();
};


#endif // INSTALLER_INSTALLER_HPP_
