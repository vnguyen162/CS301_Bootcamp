#include <iostream>
using namespace std;

int main()
{
    // declare pointer p1 and initialize to new int
    int* p1;
    p1 = new int;

    // check initial memory
    cout << "Currently, the memory at p1 reads: " << *p1 << endl;

    // prompt user for new value
    cout << "\nEnter a variable to assign to the new int: \n";
    cin >> *p1;   //copy input to p1's location

    cout << "\nNow our pointer p1 holds the value: " << *p1 << endl;
    cout << "Have a nice day!";

    return 0;
}
