//
// Created by lucas on 6/18/22.
//

#include "Builder.hpp"

#include "../Colors.hpp"

std::string Builder::assembleCompileCommand() {
    std::string outputStr;

    if (!this->project.compilerFlags.empty()) {
        outputStr = this->project.compilerFormat;

        outputStr.replace(outputStr.find("%c"), std::string("%c").length(), this->project.compiler);
        outputStr.replace(outputStr.find("%cf"), std::string("%cf").length(), this->project.compilerFlags);
        std::string sources = " ";
        for (std::string source : this->project.sources) {
            sources.append(source);
            sources.append(" ");
        }
        outputStr.replace(outputStr.find("%s"), std::string("%s").length(), sources);
        outputStr.replace(outputStr.find("%o"), std::string("%o").length(), std::string("-o " + this->project.mainBinary));
    } else {
        outputStr.append(this->project.compiler);
        outputStr.append(" ");
        for (std::string source : this->project.sources) {
            outputStr.append(source);
            outputStr.append(" ");
        }
        outputStr.append(this->project.compilerFlags);
        outputStr.append(" -o ");
        outputStr.append(this->project.mainBinary);
    }

    return outputStr;
}

Builder::Builder(GigachadParsed project) {
    this->project = project;

    std::cout << "Compiling " << GREEN << this->project.projectName << RESET << " (" << this->assembleCompileCommand() << ")\n";
    system(this->assembleCompileCommand().c_str());
}

Builder::~Builder() = default;
