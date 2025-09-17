#include <iostream>
using namespace std;

// 1-> Prime No.
// 0-> Not a Prime No.

bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    { // divide hogya h, not a prime no.
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int n;
    cin >> n;

    if (isprime(n))
    {
        cout << n << " is a Prime Number" << endl;
    }
    else
    {
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}