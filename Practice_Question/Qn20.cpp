#include <iostream>
using namespace std;
// Q. Write a C++ program to check whether a given non-negative integer is a power of 2.
//    Accept an integer input `n` from the user.
//    If `n` is a power of 2, display "True"; otherwise, display "False".

int main()
{
    int n;
    cin >> n;

    if (n <= 0)
    {
        cout << "False" << endl;
        return 0;
    }

    while (n % 2 == 0)
    {
        n = n / 2;
    }

    if (n == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}