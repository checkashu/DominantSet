cmake_minimum_required(VERSION 3.7)
project(DominantSet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h Headers.h Helper.h Node.cpp Neighbor.h Graph.h Graph.cpp)
add_executable(DominantSet ${SOURCE_FILES})