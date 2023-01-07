cmake_minimum_required(VERSION 3.16)
project(CS301_Bootcamp)

set(CMAKE_CXX_STANDARD 14)


include_directories(catch)

# Precompile catch2 to speed up re-compiles
add_library(catch2_main_DO_NOT_RUN STATIC catch/catch_main.cpp)
target_include_directories(catch2_main_DO_NOT_RUN PUBLIC catch/)

# Day 1
add_subdirectory("Day 1")

# Day 2
add_subdirectory("Day 2")


# Day 3
add_subdirectory("Day 3")

# Day 4
add_subdirectory("Day 4")

#add_subdirectory("Day 5")

