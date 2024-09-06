cmake_minimum_required(VERSION 3.0.0)

project(HelloWorld)

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)
enable_testing()

add_subdirectory(src)
add_subdirectory(test)
