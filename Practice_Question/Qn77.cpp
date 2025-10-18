#include <iostream>
using namespace std;

void Triangle_Pattern(int n)
{
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        // Print spaces for right alignment
        for (int s = 1; s <= n - i; s++)
        {
            cout << "  ";
        }

        // Store characters in array
        char temp[i];
        for (int j = 0; j < i; j++)
        {
            temp[j] = ch;
            ch++;
        }

        // Print in reverse
        for (int j = i - 1; j >= 0; j--)
        {
            cout << temp[j] << " ";
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