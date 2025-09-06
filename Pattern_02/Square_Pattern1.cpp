#include <iostream>
using namespace std;

// Square_Pattern

// If we need to reverse this we use int back=num+n-1 and cout<<back-j:

int main()
{
    int n;
    cin >> n;
    int num = 1;

    for (int i = 0; i < n; i++) // Outer loop runs n times (for n rows)
    {
        for (int j = 1; j <= n; j++) // Inner loop prints numbers from 1 to n in each row
        {

            cout << num << " ";
            num++;
        }
        cout << endl; // Move to the next line after each row
    }

    return 0;
}

/*
InPut:4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*/