//
// Created by lucas on 6/17/22.
//

#include "Builder/Builder.hpp"
#include "Parser/Parser.hpp"
#include "Installer/Installer.hpp"

#include "Gigachad.hpp"

/**
 * Convention is for the function to be called 'usage' and print to error stream
 * End std::cout statements with std::endl not just \n
 * Better help message
**/
void Gigachad::usage() {
    std::cerr << "Gigachad v0.1-alpha\n"
              << "   build: build program\n"
	      << "   install: install program\n"
	      << "   help: print this menu" << std::endl;
}

Gigachad::Gigachad(int argc, char *argv[]) {
    /* Confirm project gigachad file exists*/
    if (!std::filesystem::exists("project.json")) {
        std::cout << "You silly goose, there isn't a project in this directory!" << std::endl;
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
            this->usage();
        }
    } else {
        this->usage();
    }
}

Gigachad::~Gigachad() = default;
