#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char ch='A';
    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            
        }
        cout << endl;
        ch++;
    }

    return 0;
}
/*
output-:4
   A
  BB
 CCC
DDDD
*/