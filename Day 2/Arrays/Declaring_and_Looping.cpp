#include <iostream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 5;  //use constant for array size
    int numbers[ARRAY_SIZE];   //declare the array

    cout << "Just for fun, let's see what is in our array" << endl;
    cout << "at the beginning." << endl << endl;
    cout << "The initial values are: " << endl;

    // use for loop to output the initial values
    for(int count = 0; count < ARRAY_SIZE; count++)
        cout << "Value number: " << count << " is: " << numbers[count] << endl;

    cout << endl;
    cout << "Nice!  They are uninitialized and random..." << endl;
    cout << "Now let's set the array values each to 99..." << endl << endl;

    // use for loop to set the array's values to 99
    cout << "Now running the for loop!!!" << endl << endl;
    for (int count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = 99;

    cout << "The final values are: " << endl;

    // use for loop to output the final values
    for (int count = 0; count < ARRAY_SIZE; count++)
        cout << "Value number: " << count << " is: " << numbers[count] << endl;

    return 0;
}
