//
// Created by lucas on 6/18/22.
//

#include "Installer.hpp"

Installer::Installer(GigachadParsed project) {
    this->project = project;

    std::string path = std::string(getenv("HOME")) + "/.gigachad/bin";

    if (!std::filesystem::exists(path)) {
        std::filesystem::create_directories(path);
    }

    for (std::string binary : this->project.binaryNames) {
        path = std::string(getenv("HOME")) + "/.gigachad/bin/";

        std::string binaryLocation = std::string(std::filesystem::current_path()) + std::string("/") + binary;

        if (!std::filesystem::exists(binaryLocation)) {
            this->fail("Binary names in project.json either did not build or dont exist for some reason.");
        }

        path.append(binary);

        if (std::filesystem::exists(path)) {
            std::cout << "Removing " << RED << path << RESET << std::endl;
            std::filesystem::remove(path);
        }

        std::cout << "Installing " << GREEN << binary << RESET << " to " << path << std::endl;
        std::filesystem::copy(binaryLocation, path);
    }
}

Installer::~Installer() = default;
