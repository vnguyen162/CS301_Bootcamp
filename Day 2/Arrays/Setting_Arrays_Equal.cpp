#include <iostream>
using namespace std;

int main() {
    // This code sets firstArray equal to secondArray
    // and then outputs the two arrays.

    const int SIZE = 5;
    int firstArray[SIZE] =  {0, 0, 0, 0, 0};
    int secondArray[SIZE] = {1, 2, 3, 4, 5};

    // use for loop to output initial values in firstArray and secondArray
    cout << " firstArray initially has values: ";

    for (int i = 0; i < SIZE; i++)
        cout << firstArray[i] << " ";

    cout << endl << "secondArray initially has values: ";

    for (int i = 0; i < SIZE; i++)
        cout << secondArray[i] << " ";

    // Set firstArray's values equal to secondArray using a loop
    for(int i = 0; i < SIZE; i++)
        firstArray[i] = secondArray[i];

    cout << endl << endl;
    cout << "After running the loop... " << endl;
    cout << " firstArray has the values: ";

    for (int i = 0; i < SIZE; i++)
        cout << firstArray[i] << " ";

    cout << endl;
    cout << "secondArray has the values: ";

    for (int i = 0; i < SIZE; i++)
        cout << secondArray[i] << " ";

    return 0;
}
