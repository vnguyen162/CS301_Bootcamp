#include <iostream>
#include "../Loops/ShapePrint.h"
using namespace std;


int main() {

    cout << "Testing TrianglePrint of height 4" << endl;
    cout << "--------------------------------" << endl;
    TrianglePrint(4);
    cout << endl;

    cout << "Testing PyramidPrint of height 4" << endl;
    cout << "--------------------------------" << endl;
    PyramidPrint(4);
    cout << endl;

    cout << "Testing DiamondPrint of height 4" << endl;
    cout << "--------------------------------" << endl;
    DiamondPrint(4);

    return 0;
}
