project(CS301_Bootcamp)

set(CMAKE_CXX_STANDARD)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

# Example Mains
add_executable(Array_Ex_Declaring_and_Looping Declaring_and_Looping.cpp)
add_executable(Array_Ex_Outputting_Array Outputting_Array.cpp)
add_executable(Array_Ex_Comparing_Arrays Comparing_Arrays.cpp)
add_executable(Array_Ex_Setting_Arrays_Equal Setting_Arrays_Equal.cpp)
add_executable(Array_Ex_Summing_and_Averaging Summing_and_Averaging.cpp)
add_executable(Array_Ex_Min_Max_Array Min_Max_Array.cpp)
add_executable(Array_Ex_multi_SampleCode multi_SampleCode.cpp)

# Mains for Practice Functions
add_executable(Array_multi_part_a unit_tests/multi_part_a_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_multi_part_b unit_tests/multi_part_b_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_multi_part_c unit_tests/multi_part_c_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_multi_part_d unit_tests/multi_part_d_main.cpp Array_Practice.cpp Array_Practice.h)

add_executable(Array_part1 unit_tests/part1_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_part2 unit_tests/part2_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_part3 unit_tests/part3_main.cpp Array_Practice.cpp Array_Practice.h)
add_executable(Array_part4 unit_tests/part4_main.cpp Array_Practice.cpp Array_Practice.h)

# Unit Tests
add_executable(Array_Unit_Tests
        ../../catch/unit_test_utils.cpp
        ../../catch/unit_test_utils.h
        unit_tests/ArrayTests.cpp
        Array_Practice.cpp Array_Practice.h)