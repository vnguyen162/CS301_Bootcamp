cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Example Mains
add_executable(Classes_Ex_Employee_Pay Classes_Ex_Employee_Pay.cpp)

# Unit Tests
add_executable(Classes_Tests unit_tests/ClassTests.cpp Deck.cpp Deck.h)

# Main files
add_executable(Basic_Deck_Tester Basic_Deck_Tester.cpp Card_Game.cpp Deck.cpp Deck.h)