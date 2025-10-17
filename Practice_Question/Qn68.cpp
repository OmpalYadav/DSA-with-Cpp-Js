#include <iostream>
using namespace std;

int Triangle_Pattern(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        int temp = num + i - 1;
        for (int j = 1; j <= i; j++)
        {
            cout << temp;
            temp--;
            num++;
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
