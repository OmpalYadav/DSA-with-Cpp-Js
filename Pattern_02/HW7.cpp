#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    /*for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n-i+1; j++)
        {
                cout<<ch<<" ";
                ch++;
        }
        cout<<endl;
    }
*/

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';

        for (int j = 0; j <= n - i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}

/* Outrput-:4
A B C D
A B C
A B
A
*/