#include <iostream>
using namespace std;

int Triangle_Pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout <<" ";
        }
        for (int j = n; j >= n-i+1; j--)
        {
            cout <<j;
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
