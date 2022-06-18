//
// Created by lucas on 6/18/22.
//

// TODO: allow custom directories
// TODO: automatically add install folder to $PATH (add to shellrc?)

#ifndef GIGACHAD_INSTALLER_H
#define GIGACHAD_INSTALLER_H

#include <iostream>
#include <filesystem>

#include "../Colors.h"
#include "../Parser/GigachadParsed.h"

class Installer {
private:
    GigachadParsed project;

public:
    Installer(GigachadParsed project);
    ~Installer();
};


#endif //GIGACHAD_INSTALLER_H
