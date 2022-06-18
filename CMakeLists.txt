cmake_minimum_required(VERSION 3.22)
project(gigachad)

set(CMAKE_CXX_STANDARD 17)

add_executable(gigachad main.cpp Gigachad.cpp Parser/Parser.cpp Builder/Builder.cpp Installer/Installer.cpp)