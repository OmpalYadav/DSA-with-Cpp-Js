#include <iostream>
using namespace std;

// Triangle_Pattern For Number Using While Loop

int main()
{
    int n;
    cin >> n;

    int total = n * (n + 1) / 2; // Total numbers to print (e.g., 10 for n=4)
    int num = total;             // Start from 10 (if n = 4)

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << num-- << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
OutPut-: 4
10 
9 8
7 6 5
4 3 2 1 
*/