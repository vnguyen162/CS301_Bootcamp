#include <iostream>
using namespace std;

int main()
{
    int myIntVariable = 99;     // declare myIntVariable and set it to 99
    int *myIntVariablesPointer; // declare pointer variable

    myIntVariablesPointer = &myIntVariable;   // Set pointer to address of myIntVariable

    cout << myIntVariable << endl;  // prints value of myIntVariable

    cout << myIntVariablesPointer << endl;  // Prints the memory address of myVariable

    cout << *myIntVariablesPointer << endl; // Prints value which pointer is pointing at (myVariable)

    return 0;
}