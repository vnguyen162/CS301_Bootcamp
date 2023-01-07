#include <iostream>
#include "ShapePrint.h"
using namespace std;

void TrianglePrint(int height) {
    cout << "Printing a triangle of height " << height << endl;
    for (int i = 1; i < height+1; i++) {
        int s = 0;
        for (s = 0; s < (height - i); s++) {
            cout << " ";
        }

        for (; s < height; s++) {
            cout << "*";
        }

        cout << endl;
    }
}

void PyramidPrint(int height) {
    cout << "Printing a pyramid of height " << height << endl;
    for (int i = 1; i <= height; i++) {
        int s = 0;
        for (int s = 0; s < (height - i); s++) {
            cout << " ";
        }

        for (int s = 0; s < 2*(i-1) + 1; s++) {
            cout << "*";
        }
        cout << endl;
    }
}

void DiamondPrint(int height) {
    cout << "Printing a diamond of height " << height << endl;
    for (int i = 1; i <= height; i++) {
        int s = 0;
        for (int s = 0; s < (height - i); s++) {
            cout << " ";
        }

        for (int s = 0; s < 2*(i-1) + 1; s++) {
            cout << "*";
        }
        cout << endl;
    }
}
