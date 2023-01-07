cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

# Main files
add_executable(Basic_Input_Output basic_input_output.cpp)
add_executable(cin_cout_Exercise_1 Exercise_1.cpp)
add_executable(cin_cout_Exercise_2 Exercise_2.cpp)

