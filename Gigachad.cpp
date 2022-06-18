//
// Created by lucas on 6/17/22.
//

#include "Parser/Parser.h"

#include "Gigachad.h"

void Gigachad::printHelp() {
    std::cout << "Gigachad v0.1-alpha\n"
              << "RTFM lmao\n";

    // TODO: make man page
}

Gigachad::Gigachad(int argc, char *argv[]) {
    /* Confirm project gigachad file exists*/
    if (!std::filesystem::exists("project.json")) {
        std::cout << "You silly goose, there isn't a project in this directory!\n";
        exit(1);
    }

    Parser parser("project.json");
    GigachadParsed parsedProjectFile = parser.getOutput();

    std::cout << parsedProjectFile.projectName << "\n"
              << parsedProjectFile.projectAuthor << "\n"
              << parsedProjectFile.compiler << "\n"
              << parsedProjectFile.compilerFlags  << "\n"
              << parsedProjectFile.sources << "\n";

    /*
    if (argc > 1) {

    } else {
        this->printHelp();
    }*/
}

Gigachad::~Gigachad() {

}

