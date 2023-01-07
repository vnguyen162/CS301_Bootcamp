cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Main files
add_executable(String_Examples string_examples.cpp)
add_executable(String_cstring_Examples c_string_examples.cpp)

# Unit Tests
add_executable(String_Practice_Basic_Tests  String_Practice.cpp)
add_executable(String_Practice_Unit_Tests unit_tests/StringTests.cpp String_Practice.cpp)