#include <iostream>
using namespace std;
// Given a non-negative integer n. You have to check if it is a power of 2 or not.
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