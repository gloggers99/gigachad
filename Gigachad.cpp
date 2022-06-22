//
// Created by lucas on 6/17/22.
//

#include "Builder/Builder.h"
#include "Parser/Parser.h"
#include "Installer/Installer.h"

#include "Gigachad.h"

void Gigachad::printHelp() {
    std::cout << "Gigachad v0.1-alpha\n"
              << "RTFM lmao\n";
}

Gigachad::Gigachad(int argc, char *argv[]) {
    /* Confirm project gigachad file exists*/
    if (!std::filesystem::exists("project.json")) {
        std::cout << "You silly goose, there isn't a project in this directory!\n";
        exit(1);
    }

    Parser parser("project.json");
    GigachadParsed parsedProjectFile = parser.getOutput();

    if (argc > 1) {
        if (strcmp(argv[1], "build") == 0) {
            Builder builder(parsedProjectFile);
        } else if (strcmp(argv[1], "install") == 0) {
            Builder builder(parsedProjectFile);
            Installer installer(parsedProjectFile);
        } else if (strcmp(argv[1], "help") == 0) {
            this->printHelp();
        }
    } else {
        this->printHelp();
    }
}

Gigachad::~Gigachad() = default;
