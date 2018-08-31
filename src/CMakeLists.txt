# https://stackoverflow.com/questions/42533166/how-to-separate-header-file-and-source-file-in-cmake
cmake_minimum_required(VERSION 2.8)
project(src)

message("Processing ${CMAKE_CURRENT_SOURCE_DIR}")

set(TARGET game)
add_executable(${TARGET} main.cpp deck.cpp gameLogic.cpp terminalPrinting.cpp)
