#include <iostream>
using namespace std;

int main() {
    int myNumbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(myNumbers) / sizeof(myNumbers[0]);  // auto calculate size
    
    for (int i = 0; i < n; i++) {
        cout << myNumbers[i] << "\n";
    }
    return 0;
}