#include <iostream>
using namespace std;

int main()
{
    // This code finds the average and sum of an array.

    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    int sum = 0; //initialize summing variable

    cout << "Calculating sum and average of the array containing: ";
    for (int i = 0; i < SIZE; i++)
        cout << myArray[i] << " ";

    for (int i = 0; i < SIZE; i++)
        sum = sum + myArray[i];

    cout << endl;
    cout << "Sum of myArray: " << sum << endl;
    cout << "Avg of myArray: " << static_cast<double>(sum) / SIZE << endl;

    return 0;
}
