//
// Created by lucas on 6/18/22.
//

#include "Builder.h"

std::string Builder::assembleCompileCommand() {
    std::string outputStr;

    outputStr.append(this->project.compiler);
    outputStr.append(" ");
    for (std::string source : this->project.sources) {
        outputStr.append(source);
        outputStr.append(" ");
    }
    outputStr.append(this->project.compilerFlags);
    outputStr.append(" -o ");
    outputStr.append(this->project.projectName);


    return outputStr;
}

Builder::Builder(GigachadParsed project) {
    this->project = project;

    system(this->assembleCompileCommand().c_str());
}

Builder::~Builder() {
}