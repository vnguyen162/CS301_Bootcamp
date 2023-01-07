cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

# Main files
add_executable(Scope_Example_1 scope_example_1.cpp)
add_executable(Scope_Example_2 scope_example_2.cpp)
add_executable(Scope_Example_3 scope_example_3.cpp)
add_executable(Scope_Example_4 scope_example_4.cpp)
add_executable(Scope_Example_5 scope_example_5.cpp)

