#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";  // User se kitne Fibonacci numbers chahiye input lena
    cin >> n;

    int arr[1000];   // Fibonacci sequence ko store karne ke liye array
    arr[0] = 0;      // Fibonacci series ka pehla element
    arr[1] = 1;      // Fibonacci series ka doosra element

    cout << arr[0] << " " << arr[1] << " ";  // Pehle do elements ko print karna

    // Fibonacci series ka calculation aur printing
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];  // Pehle do elements ka sum next element
        cout << arr[i] << " ";         // Har element ko turant print karna
    }

    return 0;
}