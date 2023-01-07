#include "unit_tests/linked_list_utils.h"
#include "LinkListInt.h"
#include <iostream>
using namespace std;

int main() {
    LinkListInt list;

    cout << "------------------------- Adding 0 to 9" << endl;
    for (int i = 0; i < 10; i++) {
        list.Add(i);
    }
    cout << list.ToString() << endl;
    cout << "Size: " << list.Size() << endl;

    cout << "------------------------- Remove even numbers" << endl;
    for (int i = 0; i < 10; i+=2) {
        list.Remove(i);
    }
    cout << list.ToString() << endl;
    cout << "Size: " << list.Size() << endl;

    cout << "------------------------- Testing Contains" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i;
        if (list.Contains(i)) {
            cout << " is in list" << endl;
        }
        else {
            cout << " is NOT in list" << endl;
        }
    }
}