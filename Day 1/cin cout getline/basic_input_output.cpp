#include <iostream>
using namespace std;

void foo() {
    cout << "Oh foo..." << endl;
}

int main() {
    cout << "This is my cout statement." << endl;
    cout << "There are many like it, but this one is mine." << endl;
    cout << "There are " << 5 << " apples. Pi is approximately " << 3.14 << "." << endl;

    cout << endl << "Notice that \"\\n\" and endl both provide a new line." << "\n" << endl;
    cout << "And now for something completely different..." << endl << endl;

    cout << "--------------" << endl;
    string a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "a + b = " << a + b << endl;

    cout << "--------------" << endl;
    int x, y;
    cout << "Enter x y coordinate: ";
    cin >> x >> y;
    cout << "(" << x << ", " << y << ")" << endl;

    cout << "--------------" << endl;
    int speed;
    string name, quest;
    cout << "What is your name? ";
    cin >> name;
    cout << "What is your quest? ";
    cin >> quest;
    cout << "What is the average velocity of an unladen swallow? ";
    cin >> speed;

    cout << endl;

    cout << "Name: " << name << endl;
    cout << "Quest: " << quest << endl;
    cout << "Swallow Velocity (m/s): " << speed << endl;
}
