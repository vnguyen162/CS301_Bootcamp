#include <iostream>

using namespace std;

int main() {
    const int MAX_ROWS = 5;
    const int MAX_COLS = 4;

    int myGrid[MAX_ROWS][MAX_COLS];   //2D array to hold numbers


    cout << "Welcome to Prof. Erickson's Multidimensional Array Sandbox." << endl
         << "This sandbox is for practicing two dimensional arrays" << endl;

    cout << "Let's create some ASCII art and numbered grids to practice 2D arrays: " << endl;

    cout << "First, let's initialize our array and make a grid of zeroes: " << endl;

    // initialize all elements to zero
    for (int row = 0; row < MAX_ROWS; row++) {
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = 0;  //initialize each element to zero

        }
    }

    // output all elements to screen, separated by a space.

    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            cout << myGrid[row][col] << "\t";

        }
        cout << endl; //make a space for next row.
    }
    cout << endl;
    cout << "Now let's update our array so that each is numbered from 0 to ";
    cout << (MAX_ROWS * MAX_COLS - 1) << endl;

    int number = 0;  //variable to keep track as we number each element

    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = number;  //number each element
            cout << myGrid[row][col] << "\t";  //output to screen
            number++;  //increment number

        }
        cout << endl; //make a space for next row.
    }

    cout << endl;
    cout << "Let's do the same thing but in reverse... " << endl;

    number = (MAX_ROWS * MAX_COLS) - 1;  //set number to highest value and count down

    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {
            myGrid[row][col] = number;  //number each element
            cout << myGrid[row][col] << "\t";  //output to screen
            number--;  //increment number

        }
        cout << endl; //make a space for next row.
    }

    cout << endl;
    cout << "Let's get fancy and add a border of zeroes in the perimeter." << endl;

    number = (MAX_ROWS * MAX_COLS) - 1;  //set number to highest value and count down


    for (int row = 0; row < MAX_ROWS; row++) {
        cout << "Row # " << row << ":\t";
        for (int col = 0; col < MAX_COLS; col++) {

            if (row == MAX_ROWS - 1 || row == 0 || col == MAX_COLS - 1 || col == 0) {
                myGrid[row][col] = 0;  //if we are in a border element, set equal to zero
                cout << myGrid[row][col] << "\t";  //output to screen
            } else {
                myGrid[row][col] = number;  //number each element
                cout << myGrid[row][col] << "\t";  //output to screen
            }
            number--;  //increment number

        }
        cout << endl; //make a space for next row.
    }

    cout << endl;
    cout << "Now it's your turn!  Please complete the following questions." << endl;

    cout << endl;
    cout << "Question 1: " << endl;

    // Modify the code in the previous part of the program such that each element is replaced by the product of its row and column index.
    // For example, myGrid[1][2] would be set equal to 3 because 1 + 2 = 3.
    // When outputting to the screen, separate each element by a tab.


    cout << endl << "Question 2: " << endl;

    // Modify the code in the previous part of the program such that any row or column which has an even numbered index
    // is set equal to zero.  Any element that does not have an even numbered row or column should be set equal to 1.
    // When outputting to the screen, separate each element by a tab.


    cout << endl << "Question 3: " << endl;

    // Using for loops, count the number of zeroes and the number of ones which appear in the array from question 2.
    // you may need to declare some new counting variables to hold the number of ones and the number of zeroes.



    cout << endl << "Question 4: " << endl;

    // Use for loops change the values in the array such that all elements
    // are set equal to the index of the element's row.
    // elements in the zeroth row are numbered "0", all elements in the second row are numbered "2", etc.
    // Then, output the grid to the screen to show the properly numbered rows.
    // When outputting to the screen, separate each element by a tab.



    cout << endl << "Question 5: " << endl;

    // Use for loops to change the values in the array such that all elements
    // in the perimeter rows and columns are equal to zero.
    // also, all elements along the diagonals (where element i = element j)
    // and where element i + j == MAX_ROWS-1
    // This should form a border and "X" shape across the array using zeroes.

    return 0;
}
