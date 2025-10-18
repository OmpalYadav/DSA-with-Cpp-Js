#include <iostream>
using namespace std;

int Triangle_Pattern(int n)
{   
    for (int i = 1; i <= n; i++)
    {     char ch='A';
        for (int j = 1; j <= n - i; j++)
        {
            cout <<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout <<ch;
            ch++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Triangle_Pattern(n);
    return 0;
}
