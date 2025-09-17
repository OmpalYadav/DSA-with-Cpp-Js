#include <iostream>
using namespace std;

// Function to calculate factorial of n
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;   // multiply numbers from 1 to n
    }
    return fact;   // return factorial value
}

// Function to calculate nCr using formula: nCr = n! / (r! * (n-r)!)
int nCr(int n, int r)
{
    int num = factorial(n);                  // numerator = n!
    int denom = factorial(r) * factorial(n-r); // denominator = r! * (n-r)!
    int ans = num / denom;                   // final result
    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Answer is "<< nCr(n, r) << endl;

    return 0;
}

/*
Formula:
nCr = n! / (r! * (n−r)!)
*/
