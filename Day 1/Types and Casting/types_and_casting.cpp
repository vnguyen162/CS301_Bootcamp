#include <stdio.h>
#include <iostream>
#include <limits>
using namespace std;

enum Animal {CAT, DOG, FISH, COW};

int main() {
    int rise;
    int run;

//    cout << "Rise: ";
//    cin >> rise;
//    cout << " Run: ";
//    cin >> run;

    rise = 3;
    run = 2;
    int slope = rise/run;
//    double slope = static_cast<double>(rise/run);
//    double slope = static_cast<double>(rise)/run;
//    double slope = 1.0*rise/run;
    cout << "Slope = " << slope << endl;

    cout << "--------------------" << endl;
    cout << "3/2 = " << 3/2 << endl;
    cout << "3.0/2 = " << 3.0/2 << endl;
    cout << "3/2.0 = " << 3/2.0 << endl;
    cout << "1.0*3/2 = " << 3/2*1.0 << endl;
    cout << "static_cast<double>(3)/2 = " << static_cast<double>(3)/2 << endl;


    cout << "--------------------" << endl;
    cout << "Printable ASCII [32..126]:\n";
    int i = 31;
    for (char c = ' '; c <= '~'; c++) {
        cout << i++ << "\t'" << c << "'" << endl;
    }

    cout << "--------------------" << endl;
    cout << static_cast<char>(65) << endl;
    cout << 'A' + 1 << endl;
    cout << static_cast<char>('A' + 1) << endl;
    cout << static_cast<char>('Z' - 1) << endl;


    cout << "--------------------" << endl;
    cout << "The size of an int is " << sizeof(int) << " bytes." << endl;
    cout << "min int value: " << numeric_limits<int>::max() << endl;
    cout << "max int value: " << numeric_limits<int>::lowest() << endl;

    cout << "--------------------" << endl;
    cout << static_cast<int>(false) << endl;

    cout << "--------------------" << endl;
    // The material below is not that important but may be mildly interesting

    // Display characters 30000 to 30009 inclusive

    // Need to set the encoding
    setlocale(LC_ALL, "en_US.UTF-8");

    // Display some Chinese characters
    for(int ch=30000; ch<30010; ch++) {
        wprintf(L"%lc", ch);    // The L indicates a wide literal.
                                // wprint is a special c print function
    }

    cout << "--------------------" << endl;
    Animal myAnimal = CAT;

    myAnimal = static_cast<Animal>(myAnimal + 1);    // Trying to move to the next animal value

    cout << myAnimal << endl;
}