#include <iostream>
using namespace std;

int main() {

    // Note that this is the worse approach you can
    // use to solve the problem.
    // Can you make this more efficient?
    for (int i = 0; i < 100; i++) {
        if (i % 3 != 0 && i % 5 != 0)
            cout << i << endl;
        else if (i % 3 == 0 && i % 5 != 0)
            cout << "Fizz\n";
        else if (i % 3 != 0 && i % 5 == 0)
            cout << "Buzz\n";
        else
            cout << "FizzBuzz\n";
    }

    return 0;
}
