#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int a, b;
    cin >> a >> b;

    // Check A is prime or not
    cout << isprime(a) << endl;
    // Check factorial of A
    cout << fact(a) << endl;
    // Check B is Prime or Not
    cout << isprime(b) << endl;
    // Check factorial of B
    cout << fact(b) << endl;
    // Check B-A is prime or not
    cout << isprime(b - a) << endl;
    // Check factorial of B-A
    cout << fact(b - a) << endl;

    return 0;
}