//
// Created by vnguy on 1/11/2023.
//
#include<iostream>
#include<fstream>
using namespace std;
struct Student
        {
    string name;
    double *tests;

        };
int main()
{
    ifstream inputFile;
    ofstream outputFile;
    inputFile.open("inputFile.txt");
    outputFile.open("outputFile.txt");
    Student *myStudents = new Student[10];
    int testSize;
    inputFile >> testSize;

    int i = 0;
    string str;
    while(inputFile >> str)
    {
        myStudents[i].name =str;
        double sum = 0;
        myStudents[i].tests = new double[testSize];
        for (int j = 0; j<testSize; j++)
        {
            inputFile >>myStudents[i].tests[j];
            sum += myStudents[i].tests[j];

        }
        double avg = sum/testSize;
        outputFile << myStudents[i].name<<"\t"<<avg<<endl;
        cout << myStudents[i].name<<"\t"<<avg<<endl;
        i++;
    }
   /* Student myStudent = myStudents[0];
    cout <<"myStudents[0]: "<< myStudents[0].name<<"\t"<<myStudents[0].tests[0]<<endl;

   myStudent.tests = new double [3];
    for (int j = 0 ; j<testSize;j++)
    {
        myStudent.tests[j] = myStudents[0].tests[j];
    }
    myStudents[0].tests[0] = 100;
    cout << "myStudent: "<<myStudent.name<<"\t"<<myStudent.tests[0]<<endl;*/


    inputFile.close();
    outputFile.close();


    return 0;
}
