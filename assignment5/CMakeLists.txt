# CMake version
cmake_minimum_required(VERSION 3.0)

set (CMAKE_CXX_STANDARD 11)

set(myproject "animals")
# Project name
project(${myproject})


add_subdirectory(src)