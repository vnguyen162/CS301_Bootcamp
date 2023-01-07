#include <iostream>
using namespace std;

int main() {
    const int array_size = 10;

    // declare pointer d
    double* d;

    // create a new double array at the pointer d's memory address
    d = new double[array_size];

    cout << "We have just created our dynamic array, containing " << array_size << " items:\n";
    for (int i = 0; i < array_size; i++ ) {
        d[i] = i;
        cout << d[i] << endl;
    }

    // delete d when finished
    delete[] d;

    return 0;
}
