#include <stdio.h>
#include <iostream>
using namespace std;

int i = 21;
int main() {
    cout << i << endl;
    int i = 0;
    if (i == 0) {
        int i = 42;
        cout << i << endl;
    }

    cout << i << endl;
}