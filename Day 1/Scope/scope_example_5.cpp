#include <stdio.h>
#include <iostream>
using namespace std;

int i = 21;         // i is a global variable

void foo() {
    cout << i << endl;  // prints 21
}

int main() {
    cout << i << endl;  // prints 21
    foo();
}