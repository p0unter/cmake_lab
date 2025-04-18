cmake_minimum_required(VERSION 3.31.3)

project(
    HelloCMake
    VERSION 1.0.0
    DESCRIPTION "Great a Application"
    LANGUAGES CXX)

add_subdirectory(libs)
add_subdirectory(app)