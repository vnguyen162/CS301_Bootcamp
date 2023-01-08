#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll {
    int empNumber;//employee ID
    string name;//employee Name
    double hours;//hours worked
    double payRate;//hourly pay rate
    double grossPay;//Gross pay
};

int main() {
    PayRoll employee;  //declare PayRoll structure called employee

    // Get the employee ID number
    cout << "Enter the employee's number: ";
    cin >> employee.empNumber;

    // Get the employee's name
    cout << "Enter the employee's name: ";
    cin.ignore();  //ignore the '\n' at the end of the name
    getline(cin, employee.name);

    // Get the hours worked
    cout << "How many hours did the employee work? ";
    cin >> employee.hours;

    // Get the employee's pay rate
    cout << "What is the employee's hourly pay rate? ";
    cin >> employee.payRate;

    // Calculate the employee's gross pay
    employee.grossPay = employee.hours * employee.payRate;

    // Display the employee data
    cout << "Here is the employee's payroll data: \n";
    cout << "Name: " << employee.name << endl;
    cout << "Hours worked: " << employee.hours << endl;
    cout << "Pay Rate: $" << employee.payRate << " per hour." << endl;
    cout << "Gross Pay: $" << employee.grossPay << endl;

    return 0;
}
