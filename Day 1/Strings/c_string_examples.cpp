#include <iostream>
#include <cstring>
using namespace std;



int main() {
    char word[100] = "hello world";

    cout << "\"" << word << "\" has " << strlen(word) << " characters" << endl;

    char word1[20] = "hello";
    char word2[20] = "hello";

    // This does not work since it is comparing the address of word1 with word2
    if (word1 == word2) {
        cout << "They are equal" << endl;
    }
    else {
        cout << word1 << " and " << word2 << " are NOT equal" << endl;
    }

    // This is the proper way to compare c-strings
    if (strcmp(word1, word2) == 0) {
        cout << "They are equal" << endl;
    }
    else {
        cout << word1 << " and " << word2 << " are NOT equal" << endl;
    }
}