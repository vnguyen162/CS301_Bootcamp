#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "catch.hpp"

using namespace std;

/*
 * Sets the cin to read from a specific file.
 * Call this function before calls to cout.
 */
void SetCinIfstream(std::ifstream& in) {
    std::streambuf *cinbuf = std::cin.rdbuf(); // save old buf
    std::cin.rdbuf(in.rdbuf());                // redirect std::cin to file
}

/*
 * Sets the cout to write to a specific file.
 * Call this function before calls to cout.
 */
void SetCoutOfstream(std::ofstream& out) {
    std::streambuf *coutbuf = std::cout.rdbuf(); // save old buf
    std::cout.rdbuf(out.rdbuf());                // redirect cout to file
}

void CompareOutput(string test_title, string file_expected, string file_actual) {
    std::fstream fExpected(file_expected);
    std::fstream fActual(file_actual);

    char cExpected, cActual;
    vector<string> expected_lines, actual_lines;
    string expected_line, actual_line;

    expected_line = actual_line = "";
//    while (fExpected.get(cExpected) && fActual.get(cActual)) {
//    while (fExpected.get(cExpected) && fActual.get(cActual)) {
    while(getline(fExpected, expected_line) && getline(fActual, actual_line)) {
        cout << "I am here..." << endl;
        // If we are at a newline, then push new line onto vector
        // and reset the expected and actual line variables
        expected_lines.push_back(expected_line);
        actual_lines.push_back(actual_line);

        if (expected_line != actual_line) {

            string diff = expected_line;
            for (int i = 0; i < expected_line.size(); i++) {
                if (actual_line[i] != expected_line[i]) {
                    cActual = actual_line[i];
                    cExpected = expected_line[i];
                    diff[i] = '^';
                } else {
                    diff[i] = '_';
                }
            }
//            diff = "..         " + diff;  // Add padding

            INFO("EXPECTED: \"" << expected_line << "\"");
            INFO("--ACTUAL: \"" << actual_line << "\"");
            INFO("___________" + diff);
            INFO("");
            if (expected_line.size() >= actual_line.size()) {
                INFO("Character " << cActual << " does not match expected character " << cExpected);
                INFO("");
            }
            INFO("Note: If both lines look the same, then it could be the an");
            INFO("invisible whitespace such as a tab or newline. Highlighting");
            INFO("and/or copying each line could help you figure out if there");
            INFO("are hidden whitespace characters. ");
            FAIL();
        }
    }

    if (getline(fExpected, expected_line)) {
        INFO("Your program is missing output.");
        INFO("")
        INFO("Missing output: " << expected_line);
        INFO("")
        INFO("Please review " << file_expected << " and " << file_actual << "(your program output)");
        FAIL();
    }

    if (getline(fActual, actual_line)) {
        INFO("Extra output found in " << file_actual << " (your program output)");
        INFO("")
        INFO("Extra output: " << actual_line);
        INFO("")
        INFO("Please review " << file_expected << " and " << file_actual);
        FAIL();
    }
}
