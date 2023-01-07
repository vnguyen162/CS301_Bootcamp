cmake_minimum_required(VERSION 3.16)
project(CS301-Bootcamp)

#message(WARNING "The CMAKE_SOURCE_DIR is ${CMAKE_SOURCE_DIR}")
#message(WARNING "The CMAKE_CURRENT_SOURCE_DIR is ${CMAKE_CURRENT_SOURCE_DIR}")
#message(WARNING "catch source is ${CMAKE_SOURCE_DIR}/catch/catch_main.cpp")

set(CMAKE_CXX_STANDARD 14)

# Mains
add_executable(LinkList_Exercise_1_and_2 Exercise_1_and_2_main.cpp)

# Unit Tests
add_executable(LinkList_Tests
        LinkListInt.cpp LinkListInt.h
        "${CMAKE_CURRENT_SOURCE_DIR}/unit_tests/link_list_tests.cpp")

# Example Mains
add_executable(LinkList_Examples link_list_examples.cpp FindPriorNode.cpp FindPriorNode.h DeleteNode.cpp DeleteNode.h)
add_executable(LinkListClass LinkListInt.cpp LinkListInt.h Exercise_3_main.cpp)

