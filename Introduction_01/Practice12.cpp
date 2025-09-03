#include <iostream>
using namespace std;

// Swap two numbers using a temporary variable.

int main()
{
    int a;
    cin >> a;
    int b;
    cin >> b;
    int temp;

    cout << "Before swap: a = " << a << " b = " << b << endl;
    temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << " b = " << b << endl;

    return 0;
}