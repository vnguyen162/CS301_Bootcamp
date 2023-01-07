/**
 * Created by Varick Erickson on 10/25/2022.
 *
 * You should not remove or change any of the tests in this file.
 *
 * The purpose of this file is to test the functions for the various loop functions.
 */

#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "../Array_Practice.h"
#include "unit_test_utils.h"

TEST_CASE("Array Tests") {

    SECTION("part1 Test") {
        std::ofstream out("part1_out.txt");
        SetCoutOfstream(out);
        part1();
        out.close();
        CompareOutput("part1 Test", "expected_output/expected_output_part1_out.txt", "part1_out.txt");

    }

    SECTION("part2 Test") {
        std::ofstream out("part2_out.txt");
        SetCoutOfstream(out);
        part2();
        out.close();
        CompareOutput("part2 Test", "expected_output/expected_output_part2_out.txt", "part2_out.txt");
    }

    SECTION("part3 Test") {
        std::ofstream out("part3_out.txt");
        SetCoutOfstream(out);
        part3();
        out.close();
        CompareOutput("part3 Test", "expected_output/expected_output_part3_out.txt", "part3_out.txt");
    }

    SECTION("part4 Test") {
        std::ofstream out("part4_out.txt");
        std::ifstream in("unit_tests/part4_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        part4();
        out.close();
        in.close();
        CompareOutput("part4 Test", "expected_output/expected_output_part4_out.txt", "part4_out.txt");
    }

    SECTION("part5 Test") {
        std::ofstream out("part4_out.txt");
        std::ifstream in("unit_tests/part4_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        part4();
        out.close();
        in.close();
        CompareOutput("part4 Test", "expected_output/expected_output_part4_out.txt", "part4_out.txt");
    }

    SECTION("multi_part_a Test") {
        std::ofstream out("multi_part_a.txt");
        std::ifstream in("unit_tests/multi_part_a_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        multi_part_a();
        out.close();
        in.close();
        CompareOutput("multi_part_a Test", "expected_output/expected_output_multi_part_a.txt", "multi_part_a.txt");
    }

    SECTION("multi_part_b Test") {
        std::ofstream out("multi_part_b.txt");
        std::ifstream in("unit_tests/multi_part_b_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        multi_part_b();
        out.close();
        in.close();
        CompareOutput("multi_part_b Test", "expected_output/expected_output_multi_part_b.txt", "multi_part_b.txt");
    }

    SECTION("multi_part_c Test") {
        std::ofstream out("multi_part_c.txt");
        std::ifstream in("unit_tests/multi_part_c_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        multi_part_c();
        out.close();
        in.close();
        CompareOutput("multi_part_c Test", "expected_output/expected_output_multi_part_c.txt", "multi_part_c.txt");
    }

    SECTION("multi_part_d Test") {
        std::ofstream out("multi_part_d.txt");
        std::ifstream in("unit_tests/multi_part_d_input.txt");
        SetCinIfstream(in);
        SetCoutOfstream(out);
        multi_part_d();
        out.close();
        in.close();
        CompareOutput("multi_part_d Test", "expected_output/expected_output_multi_part_d.txt", "multi_part_d.txt");
    }
}