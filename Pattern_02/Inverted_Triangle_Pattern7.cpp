#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) // Outer loop to handle rows
    {

        for (int j = 1; j <= n - i; j++) // Print numbers (repeat the number i times)
        {
            cout << "* ";
        }
        for (int j = 0; j <= i; j++) // Print spaces
        {
            cout << " ";
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}
/*
input: 4
* * * *
* * *
* *
*
*/