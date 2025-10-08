#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a leap Year" << endl;
    }

    return 0;
}