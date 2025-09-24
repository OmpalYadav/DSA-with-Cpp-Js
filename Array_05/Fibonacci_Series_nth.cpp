#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";  // User se nth Fibonacci number ke liye input lena
    cin >> n;

    int arr[1000];   // Fibonacci sequence ko store karne ke liye array
    arr[0] = 0;      // Fibonacci series ka pehla element
    arr[1] = 1;      // Fibonacci series ka doosra element

    // Fibonacci series ka calculation
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];  // Pehle do elements ka sum next element
    }

    cout << arr[n-1] << " ";  // Sirf nth Fibonacci number print karna

    return 0;
}