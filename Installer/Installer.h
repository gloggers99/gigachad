//
// Created by lucas on 6/18/22.
//


#ifndef INSTALLER_INSTALLER_H_
#define INSTALLER_INSTALLER_H_

#include <iostream>
#include <filesystem>
#include <string>

#include "../Colors.h"
#include "../Parser/GigachadParsed.h"

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


#endif // INSTALLER_INSTALLER_H_
