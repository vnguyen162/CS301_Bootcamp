#include <iostream>
using namespace std;

double addTogether(double firstNumber, double secondNumber);
// Precondition: firstNumber and secondNumber are initialized.
// Postcondition: returns the sum of firstNumber and secondNumber

bool GetYesNo(string promptMsg);
// Precondition: promptMsg is a valid string
// Postcondition: returns true if user enters "y" and false if the user enters "n"

int main() {
    double input1 = 0, input2 = 0;

    cout << "Enter your first number: ";
    cin >> input1;

    cout << "Enter your second number: ";
    cin >> input2;

    cout << "The sum of your numbers is: " << addTogether(input1, input2) << endl;

    double avg = addTogether(input1, input2)/2;
    cout << "The average of your numbers is: " << avg << endl << endl;

    while (!GetYesNo("Did you enjoy adding values together? ")) {
        cout << "Let's ask that question again..." << endl;
    }
    cout << "I'm glad you enjoyed it!" << endl;

    return 0;
}

double addTogether(double firstNumber, double secondNumber) {
    return (firstNumber + secondNumber); //add two arguments
}

bool GetYesNo(string promptMsg) {
    while (true) {
        string ans;
        cout << promptMsg << "(y/n) ";
        cin >> ans;

        if (ans == "y" || ans == "yes") {
            return true;
        }
        else if (ans == "n" || ans == "no") {
            return false;
        }
        else {
            cout << "Please answer y or n" << endl;
        }
    }
}