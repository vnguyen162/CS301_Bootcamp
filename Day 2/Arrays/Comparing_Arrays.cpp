#include <iostream>
using namespace std;

int main() {
    // This code checks if two arrays are equal.

    const int SIZE = 5;
    int firstArray[SIZE] = {5, 10, 15, 20, 25};
    int secondArray[SIZE] = {5, 10, 15, 20, 25};
    bool arraysEqual = true; // Flag variable
    int count = 0;           // Loop counter variable

    // Compare the two arrays.
    for (int i = 0; i < SIZE; i++) {
        if (firstArray[count] != secondArray[count]) {
            arraysEqual = false;
            break;
        }
    }

    if (arraysEqual)
        cout << "The arrays are equal.\n";
    else
        cout << "The arrays are not equal.\n";

    return 0;
}