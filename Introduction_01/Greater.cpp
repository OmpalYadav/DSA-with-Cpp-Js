#include <iostream>
using namespace std;

// Find the Greatest of the Two Numbers in C++
int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << "Both are equal";
    }
    else if (a > b)
    {
        cout << "A greater than B";
    }
    else
    {
        cout << "B greater than A";
    }

    return 0;
}
