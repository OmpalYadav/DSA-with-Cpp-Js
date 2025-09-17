#include <iostream>
#include <cstdlib>  // for exit()
using namespace std;

int main() {
    while (1) {    
        int num;
        cin >> num;

        switch (num) {
        case 1: 
            cout << "Case 1 executed" << endl;
            break;
        case 2: 
            cout << "Case 2 executed" << endl;
            break;
        case 3: 
            cout << "Exiting program..." << endl;
            exit(0);  // terminate program
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }
    return 0;
}
