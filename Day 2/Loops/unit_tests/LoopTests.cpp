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
#include "../ShapePrint.h"
#include "unit_test_utils.h"

TEST_CASE("Triangle Tests") {

    std::ofstream out("triangle_out.txt");
    SetCoutOfstream(out);

    for (int h = 0; h < 10; h++) {
        TrianglePrint(h);
    }

    out.close();  // finish redirecting the cout
    CompareOutput("Triangle Tests", "expected_output/expected_triangle_out.txt", "triangle_out.txt");
}

TEST_CASE("Pyramid Tests") {

    std::ofstream out("pyramid_out.txt");
    SetCoutOfstream(out);

    for (int h = 0; h < 10; h++) {
        PyramidPrint(h);
    }

    out.close();  // finish redirecting the cout
    CompareOutput("Pyramid Tests", "expected_output/expected_pyramid_out.txt", "pyramid_out.txt");
}