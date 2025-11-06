#include <iostream>
using namespace std;
// Q. Write a C++ program to calculate the square of a number and the sum of squares of all natural numbers up to that number.
//    Accept an integer input `n` from the user.
//    Display the square of `n` (i.e., n * n).
//    Then compute and display the sum of squares of all natural numbers from 1 to `n` using a loop.

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    cout << "Square " << n * n << endl;
    cout << "sum of all sqaure of all natural number = " << sum << endl;
    return 0;
}