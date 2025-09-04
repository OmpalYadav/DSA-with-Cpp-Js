#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j * j << " ";
            j++;
        }
        cout << endl;
        i++;

    }

    return 0;
}
/*
output = 4
1 4 9 16 
1 4 9 16 
1 4 9 16 
1 4 9 16
*/