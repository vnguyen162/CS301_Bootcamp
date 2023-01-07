#include <iostream>
using namespace std;

int main() {

    cout << "-----------------" << endl;
    int countDown;
    cout << "How many greetings do you want?\n";
    cin >> countDown;

    while (countDown > 0) {
        cout << "Hello ";
        countDown = countDown - 1;
    }

    cout << endl;
    cout << "That's all!\n";

    cout << endl;
    cout << "-----------------" << endl;

    // Examples of scope and initialization

    for (int i = 1; i <= 5; i++)
        cout << "Hello1" << endl;
    cout << endl;

    int i;
    for (i = 1; i <= 5; i++)
        cout << "Hello2" << endl;
    cout << endl;

    cout << "-----------------" << endl;

    int x, y;
    for (x=1, y=1; x <= 5; x++){
        cout << x << " plus " << y << " equals " << (x+y) << endl;
    }

    // It is also possible to omit the initialization
    int sum = 0, num = 1;
    for (; num <= 10; num++)
        sum += num;
    cout << "sum: " << sum << endl;
    cout << "-----------------" << endl;

    char ans;
    do
    {
        cout << "Hello!" << endl;
        cout << "Do you want another greeting?" << endl;
        cout << "Press y for yes, n for no," << endl;
        cout << "and then press return: ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');

    cout << "Good-Bye" << endl;




    return 0;
}
