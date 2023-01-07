#ifndef UNIT_TEST_UTILS_H
#define UNIT_TEST_UTILS_H

#include <string>
#include <iostream>
#include <fstream>

using namespace std;


/*
 * Sets the cout to write to a specific file.
 * Call this function before calls to cout.
 */
void SetCinIfstream(std::ifstream& in);

/*
 * Sets the cout to write to a specific file.
 * Call this function before calls to cout.
 */
void SetCoutOfstream(std::ofstream& out);

/*
 * Compares two files line by line and identifies start of difference
 */
void CompareOutput(string test_title, string file_expected, string file_actual);

#endif
