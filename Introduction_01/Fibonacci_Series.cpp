#include <iostream>
using namespace std;

//Fibonacci Series upto nth term
int main() {
    int n=5;
    int a = 0, b = 1;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
