# CMake version
cmake_minimum_required(VERSION 3.0)

set (CMAKE_CXX_STANDARD 11)

set(myproject "animals")
# Project name
project(${myproject})

# Define the executable
add_executable(${PROJECT_NAME}
				main.cpp
				Dog.cpp
				Shelter.cpp)
