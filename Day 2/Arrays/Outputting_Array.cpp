#include <iostream>
using namespace std;

int main()
{
    // This code declares firstArray and secondArray
    // and then outputs the two arrays.

    const int SIZE = 5;
    int firstArray[SIZE] = {0, 0, 0, 0, 0};
    int secondArray[SIZE] = {1, 2, 3, 4, 5};

    // use for loop to output initial values in firstArray and secondArray
    cout << " firstArray initially has values: ";
    for (int i = 0; i < SIZE; i++)
        cout << firstArray[i] << " ";

    cout << endl;
    cout << "secondArray initially has values: ";
    for (int i = 0; i < SIZE; i++)
        cout << secondArray[i] << " ";

    return 0;
}
