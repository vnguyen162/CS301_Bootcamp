#include "FileExamples.h"
#include <iostream>
#include <fstream>
//using namespace std;

/*
 * Precondition:    The words array contains enough space to hold all the words in the file.
 *                  The file "filename" exists and is readable.
 * Postcondition:   Words from the file and read into the array words.  The function returns
 *                  the total number of words.
 */
int ReadFileIntoArray(string words[], string filename) {
    ifstream inputFile;

    inputFile.open(filename);

    string word;
    int i = 0;
    while (inputFile >> word) {
        words[i] = word;
        i++;
    }

    return i;
}