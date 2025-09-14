#include <iostream>
using namespace std;

int main() {
    int n; 
    cin>>n;  // negative number

    for(int i = 3; i >= 0; i--) {   // 8-bit representation
        cout << ((n >> i) & 1);
    }
    cout << endl;

    return 0;
}
