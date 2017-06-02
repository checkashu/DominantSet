cmake_minimum_required(VERSION 3.7)
project(DominantSet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp include/Node.h include/Headers.h include/Helper.h src/Node.cpp include/Graph.h src/Graph.cpp include/GraphHelper.h src/GraphHelper.cpp)
add_executable(DominantSet ${SOURCE_FILES})