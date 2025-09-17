#include <iostream>
using namespace std;

// Function to count set bits in a number
int countSetBits(int n) {
    int count = 0;
    while (n) {
        count =count+(n & 1); // last bit check
        n= n>>1;          // right shift
    }
    return count;
}

int OrOper(int a, int b) {
    int ans = (a | b); // OR operation
    return ans;
}

int main() {
    int a, b;
    cin >> a >> b;

    int result = OrOper(a, b);
    cout << "a | b = " << result << endl;
    cout << "Total set bits = " << countSetBits(result) << endl;

    return 0;
}
