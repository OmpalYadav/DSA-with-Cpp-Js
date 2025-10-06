#include <iostream>
using namespace std;

// this for fibonacci series ka nth nikale ke liye
int main()
{
    int n, a, b, c;
    cin >> n;
    if (n < 0)
    {
        return 0;
    }
    else
    {
        a = 0;
        b = 1;
        c = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c;
    return 0;
}