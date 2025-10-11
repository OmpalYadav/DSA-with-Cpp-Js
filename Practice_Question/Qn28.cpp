#include <iostream>
using namespace std;

// Program to print day name using switch case
int main()
{
    int n;
    cout << "Enter a number (1-7): ";
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Sunday" << endl;
        break;
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
        break;
    }

    return 0;
}
