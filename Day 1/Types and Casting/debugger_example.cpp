#include <iostream>
using namespace std;

int main() {
    int exam1Score;
    int exam2Score;
    int averageScore;

    cout << "Enter your Exam 1 score: ";
    cin >> exam1Score;

    cout << "Enter your Exam 2 score: ";
    cin >> exam2Score;

    averageScore = (exam1Score + exam2Score) / 2;

    cout << "Your average score is: " << averageScore;
    cout << "\nHave a Nice Day!\n";

    return 0;
}
