#include <iostream>
using namespace std;

// Mene Yhn Divide uuse kiya kyu ki use pata chalta hai kitne notes lagenge, aur Modulus se pata chalta hai kitna paisa bacha hai.
int main()
{

    int Amount = 1330;
    switch (1)
    {
    case 1:
        cout << "100 Rupye ke " << Amount / 100 << endl;
        Amount = Amount % 100;
    }
    switch (2)
    {
    case 2:
        cout << "50 Rupye ke " << Amount / 50 << endl;
        Amount = Amount % 50;
    }
    switch (3)
    {
    case 3:
        cout << "20 Rupye ke " << Amount / 20 << endl;
        Amount = Amount % 20;
    }
    switch (4)
    {
    case 4:
        cout << "1 Rupye ke " << Amount / 1 << endl;
        Amount = Amount % 1;
    }

    return 0;
}