#include <iostream>
#include <cstring>
using namespace std;



int main() {

    string name = "Jim";
    cout << name << endl;

    char greeting[10] = "hello";
    cout << greeting << endl;

    string str = "Hello";
    cout << str << " has " << str.length() << " letters" << endl;
    cout << str << " has " << str.size() << " letters" << endl;

    str = "Hello World";
    cout << str << " has " << str.length() << " letters" << endl;
    cout << str.substr(0, 5) << endl;
    cout << str.substr(6, str.length()) << endl;

    // Looping through a string
    str = "Hello World";
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }

    // Concat examples
    str = "hello";
    cout << greeting << endl;

    str = str + " world";
    cout << str << endl;

    str += "!";
    cout << str << endl;

}