#include <iostream>
using namespace std;

int PrimeNumber(int n) {
    if (n <= 1) {
        return 0;  // not prime
    } 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;  // divisible → not prime
        }
    }
    return 1; // prime
}

int main() {
    int n;
    cin >> n;

    cout << "Prime numbers from 1 to " << n << " are:" << endl;
    for (int i = 1; i <= n; i++) {
        if (PrimeNumber(i)) {   
            cout << i <<endl;
        }
    }
    return 0;
}
