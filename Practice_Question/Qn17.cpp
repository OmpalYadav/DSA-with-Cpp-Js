#include <iostream>
#include <math.h>
using namespace std;

int power_n(int n)
{
    // Q. Write a C++ program to calculate n raised to the power of its reverse.
    //    Accept an integer input `n` from the user.
    //    Reverse the digits of `n` and compute n^reverse using the `pow()` function.
    //    Display the result of this computation.

    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    return pow(original, reverse);
}

int main()
{

    int n;
    cin >> n;
    int ans = power_n(n);
    cout << ans;
    return 0;
}