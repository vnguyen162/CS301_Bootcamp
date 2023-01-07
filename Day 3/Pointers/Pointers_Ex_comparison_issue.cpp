#include <iostream>
using namespace std;

int main()
{
    int* p1, *p2;

    p1 = new int;
    *p1 = 42;

    cout << "We declared pointers p1 and p2, and set *p1 to 42" << endl;
    cout << "setting pointer p2 = p1 gives:" << endl;
    p2 = p1;
    cout << "\n*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    *p2 = 53;
    cout << "Now setting *p2 to 53..." << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    p1 = new int;
    *p1 = 88;
    cout << "Now setting p1 to new int and value 88" << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;

    cout << "Hope you got the point of this example!";
    return 0;

}
