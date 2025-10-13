#include <iostream>
using namespace std;

int Square_Pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Square_Pattern(n);
    return 0;
}