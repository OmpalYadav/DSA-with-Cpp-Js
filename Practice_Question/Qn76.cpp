#include <iostream>
using namespace std;

void Triangle_Pattern(int n)
{
    int i = 1;
    int total = n * (n + 1) / 2;
    char ch= total+'A'-1;
    while (i <= n)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch--;
        }
        i++;
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