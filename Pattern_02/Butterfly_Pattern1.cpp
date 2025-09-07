#include <iostream>
using namespace std;
//mirror diamond butterfly
int main() {
    int n;
    cin >> n;

    // Top half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
/* 

Ouput-:
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********


*/