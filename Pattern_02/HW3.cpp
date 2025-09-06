#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)

    {       char ch='F';
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
/*
1 8 27 64 125 
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
*/