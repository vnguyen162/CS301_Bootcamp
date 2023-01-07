cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

#include_directories("${CMAKE_SOURCE_DIR}/catch")

## Precompile catch2 to speed up re-compiles
#add_library(catch2_main STATIC ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp)
#target_include_directories(catch2_main PUBLIC ${CMAKE_SOURCE_DIR}/catch)

# Main files
add_executable(Shape_Main Shape_Main.cpp ShapePrint.cpp ShapePrint.h)
add_executable(Pyramid_Main ../Arrays/LoopMain.cpp ShapePrint.cpp ShapePrint.h)
add_executable(Loop_Examples Loop_Examples.cpp)
add_executable(Loop_Ex_FizzBuzz Loop_Ex_FizzBuzz.cpp)

# Unit test
add_executable(Loop_Tests
        ShapePrint.cpp ShapePrint.h
        ../../catch/unit_test_utils.h ../../catch/unit_test_utils.cpp
        "${CMAKE_CURRENT_SOURCE_DIR}/unit_tests/LoopTests.cpp")


# Precompile catch2 to speed up re-compiles
#target_link_libraries(Loop_Tests catch2_main)
#target_compile_definitions(Loop_Tests PRIVATE CATCH_CONFIG_FAST_COMPILE CATCH_CONFIG_DISABLE_MATCHERS)
#target_precompile_headers(Loop_Tests PRIVATE "${CMAKE_SOURCE_DIR}/catch/catch.hpp")

#add_executable(Pyramid_Tests Pyramid.h "${CMAKE_CURRENT_SOURCE_DIR}/unit_tests/Pyramid_Tests.cpp")

# message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
# message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
# message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch2_main")

# Use precompiled catch2 library for all of the executables to speed up recompile times
#target_link_libraries(Loop_Tests "${CMAKE_CURRENT_SOURCE_DIR}/unit_tests/catch_main_pyramid.cpp")
#target_link_libraries(Loop_Tests "${CMAKE_SOURCE_DIR}/catch/catch2_main")
#target_precompile_headers(Loop_Tests PRIVATE "${CMAKE_SOURCE_DIR}/catch/catch.hpp")