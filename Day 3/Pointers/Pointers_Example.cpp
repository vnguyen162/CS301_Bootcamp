//
// Created by vnguy on 1/10/2023.
//
#include <iostream>
using namespace std;
int* Create_Array(const int size);
int* Set_Array(int* arr, const int size);

int main()
{
    int size =10;
    int*myArray = Create_Array(size);
    int*newArray = Set_Array(myArray, size);
    for (int i =0 ; i<size; i++)
    {
        cout<< newArray[i]<<endl;
    }
    return 0;
}

int* Create_Array(const int size)
{
    //int *arr = new int[size]; //dataType *name = new dataType[size]
    int *arr;
    arr = new int [size];
    return arr;
}
int* Set_Array(int* arr, int size)
{
    for (int i = 0; i<size;i++)
    {
        arr[i]=i;
    }
    return arr;
}
