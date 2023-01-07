cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Main files
add_executable(Pointers_Ex_Basic_Usage Pointers_Ex_basic_usage.cpp)
add_executable(Pointers_Ex_Basic_New_Usage Pointers_Ex_basic_new_usage.cpp)
add_executable(Pointers_Ex_Comparison_Issue Pointers_Ex_comparison_issue.cpp)
add_executable(Pointers_Ex_Functions Pointers_Ex_functions.cpp)
add_executable(Pointers_Ex_Dynamic_Array_Basic_Usage Pointers_Ex_dynamic_array_basic_usage.cpp)
add_executable(Pointers_Ex_Dynamic_Multidimensional_Basic_Usage Pointers_Ex_dynamic_multidimensional_basic_usage.cpp)