#include <iostream>
using namespace std;

int main() {
    int d1, d2;
    cout << "Enter the row and column dimensions of the array: \n";
    cin >> d1 >> d2;

    int** m = new int*[d1];     // m points to an array of int pointers
    int i, j;

    // For each index, we initialize the pointer to point to an array of integers
    for (i = 0; i < d1; i++)
        m[i] = new int[d2];

    cout << "Enter " << d1 << " rows of " << d2 << " integers each: \n";

    // Get data from the user.
    for (i = 0; i < d1; i++)
        for (j = 0; j < d2; j++)
            cin >> m[i][j];

    cout << "Outputting the two-dimensional array: \n";
    for (i = 0; i < d1; i++) {
        for (j = 0; j < d2; j++)
            cout << m[i][j] << " ";
        cout << endl;
    }


    // delete when finished
    // there must be one call to delete[]
    // for each call to new that created an array.
    // these delete calls aren't really needed since this program
    // is ending, but included for reference
    for (i = 0; i < d1; i++)
        delete[] m[i];
    delete[] m;

    return 0;
}

