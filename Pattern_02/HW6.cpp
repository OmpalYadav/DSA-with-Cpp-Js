#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int num = 10;
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}

/*
10
10 11
10 11 12
10 11 12 13
10 11 12 13 14
10 11 12 13 14 15
*/
