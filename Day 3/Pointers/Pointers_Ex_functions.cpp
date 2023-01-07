#include <iostream>
using namespace std;

void getNumber(int*);
// Precondition: input parameter is a valid memory address
// Postcondition: prompts user for an int number to store at the address

void doubleValue(int*);
// Precondition: input parameter is a valid memory address and contains an int value
// Postcondition: doubles the int value located at the input memory address

int main() {
    int number;

    // Call getNumber and pass the address of number...
    getNumber(&number);

    // Call doubleValue and pass the address of number...
    doubleValue(&number);

    // display the value in number:
    cout << "Your number doubled is: " << number << endl;

    return 0;
}

void getNumber(int* input) {
    cout << "Enter an integer number: ";
    cin >> *input;
    cout << "You entered: " << *input << ".\n";
}

void doubleValue(int *val) {
    *val = *val * 2;
}
