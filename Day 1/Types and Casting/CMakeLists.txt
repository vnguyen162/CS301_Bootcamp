cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

# Main files
add_executable(Types_and_Casting_Examples types_and_casting.cpp)
add_executable(Types_and_Casting_Debugger_Example debugger_example.cpp)
add_executable(Types_and_Casting_Example0 Types_and_Casting_Example0.cpp)
