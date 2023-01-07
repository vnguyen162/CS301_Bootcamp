#include <iostream>
#include <fstream>
#include "FileExamples.h"
using namespace std;

int main() {

    // Checking if the file opened properly
    ifstream badFile;
    badFile.open("bad.txt");

    if (badFile.fail()) {
        cout << "bad.txt failed to open" << endl;
    }

    cout << endl;

    string name;
    int age;

    // Get values from user
//    cout << "What is your name? ";
//    cin >> name;                   // Gets name from user
//    cout << "How old are you? ";
//    cin >> age;                    // Gets age from user
//
//    cout << "Name: " << name << endl;
//    cout << "Age: " << age << endl;
//
//    cout << endl;



    // Reading a from a file
    cout << "Basic file reading" << endl;
    cout << "------------------" << endl;
    ifstream userFile;              // Create a ifstream object
    userFile.open("name_age.txt");  // Store contents of name_age.txt into myFile

    // Get values from name_age.txt file
    userFile >> name;
    userFile >> age;
    // userFile >> name >> age;   // This also works.
    userFile.close(); // Done with file

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    cout << endl;

    // Reading words into an array
    cout << "Reading words into an array" << endl;
    cout << "---------------------------" << endl;
    string words[20];
    ifstream inputFile;
    inputFile.open("array_file.txt");

    string word;
    int i = 0;
    while (inputFile >> word) {
        words[i] = word;
        i++;
    }

    int numWords = i;
    for (int i = 0; i < numWords; i++) {
        cout << words[i] << endl;
    }

    cout << endl;

    // Reading all the lines of a file
    cout << "Reading all the lines of a file" << endl;
    cout << "-------------------------------" << endl;
    ifstream myFile;
    myFile.open("array_file.txt");
    string line;
    i = 0;
    while (getline(myFile, line)) {
        cout << "Line " << i << ": " << line << endl;
        i++;
    }

    cout << endl;

    // Writing to a file
    cout << "Writing to a file" << endl;
    cout << "-----------------" << endl;
    ofstream outputFile;
    outputFile.open("output.txt");

    outputFile << "Hello World" << endl;
    outputFile << "This is another line...";
    outputFile << "a few more things on this line..." << endl;
    outputFile << "Last line" << endl;
    outputFile.close();

    cout << "Done Writing to a file." << endl;

    cout << endl << endl;

    cout << "Hello World" << endl;
    cout << "This is another line...";
    cout << "a few more things on this line..." << endl;
    cout << "Last line" << endl;

    return 0;
}
