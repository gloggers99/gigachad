//
// Created by lucas on 6/18/22.
//

#include "Installer.h"

Installer::Installer(GigachadParsed project) {
    this->project = project;

    std::string path;
    path.append(getenv("HOME"));
    path.append("/.gigachad/bin/");

    if (!std::filesystem::exists(path)) {
        std::filesystem::create_directories(path);
    }

    std::string binaryLocation;

    binaryLocation.append(std::filesystem::current_path());
    binaryLocation.append("/");
    binaryLocation.append(this->project.binaryName);

    path.append(this->project.binaryName);

    std::cout << "Installing " << GREEN << this->project.binaryName << RESET << " to " << path << "\n";
    std::filesystem::copy(binaryLocation, path);
}

Installer::~Installer() = default;