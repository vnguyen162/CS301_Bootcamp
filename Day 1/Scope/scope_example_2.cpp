#include <stdio.h>
#include <iostream>
using namespace std;

void foo(int i) {
    i = 3;
}

int main() {
    int i = 0;

    foo(i);

    cout << i << endl;
}