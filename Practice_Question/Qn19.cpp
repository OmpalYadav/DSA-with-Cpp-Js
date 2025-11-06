#include <iostream>
using namespace std;

// Print Sum of Cube of first n natural number.

int main()
{
    int n, sum = 0;
    cout << "Enter value of n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i * i * i);
    }
    cout << "Cube " << n * n * n << endl;
    cout << "Sum of Cube of first " << n << " natural numbers is: " << sum;
    return 0;
}
