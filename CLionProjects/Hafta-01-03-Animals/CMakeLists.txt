cmake_minimum_required(VERSION 3.15)
project(Animals)

set(CMAKE_CXX_STANDARD 17)

add_executable(Animals main.cpp Animal.cpp Animal.h Cat.cpp Cat.h Dog.cpp Dog.h)