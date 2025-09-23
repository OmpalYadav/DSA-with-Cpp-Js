// C++ program to demonstrate the passing of array as sized
// 1. Passing as a Sized Array

#include <iostream>
using namespace std;

// function to update array elements
void printarray(int a[10])
{
    for (int i = 0; i < 5; i++)
        a[i] = a[i] + 5;
}

int main()
{
    // array declaration
    int a[5] = { 1, 2, 3, 4, 5 };
    printarray(a); // Passing array to function

    // printing array elements
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    return 0;
}