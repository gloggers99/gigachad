//
// Created by lucas on 6/18/22.
//


#ifndef GIGACHAD_INSTALLER_H
#define GIGACHAD_INSTALLER_H

#include <iostream>
#include <filesystem>

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
    Installer(GigachadParsed project);
    ~Installer();
};


#endif //GIGACHAD_INSTALLER_H
