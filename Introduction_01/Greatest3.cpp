#include <iostream>
using namespace std;

// Program to find the Greatest of Three Numbers in C++

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if ((A >= B) && (A >= C))
    {
        cout << A << " is the greatest" << endl;
    }

    else if ((B >= A) && (B >= C))
    {
        cout << B << " is the greatest" << endl;
    }
    else
    {
        cout << C << " is the greatest" << endl;
    }

    return 0;
}