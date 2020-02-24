cmake_minimum_required(VERSION 3.15)
project(thread)

set(CMAKE_CXX_STANDARD 11)

add_executable(thread main.cpp sinif.cpp sinif.h)

find_package (Threads)
target_link_libraries (thread ${CMAKE_THREAD_LIBS_INIT})