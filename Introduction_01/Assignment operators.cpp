#include <iostream>
using namespace std;

/*
- Assignment operator (=) assigns a value to a variable.
- Compound assignment operators (+=, -=, *=, /=, %=) combine an arithmetic operation with assignment.
  For example, a += b is the same as a = a + b.
*/

int main() {
    int a = 10;      // Assignment operator (=) assigns 10 to variable a
    int b = 5;

    // Compound assignment operators
    a += b;          // a = a + b;  Now a = 15
    cout << "a += b: " << a << endl;

    a -= b;          // a = a - b;  Now a = 10
    cout << "a -= b: " << a << endl;

    a *= b;          // a = a * b;  Now a = 50
    cout << "a *= b: " << a << endl;

    a /= b;          // a = a / b;  Now a = 10
    cout << "a /= b: " << a << endl;

    a %= b;          // a = a % b;  Now a = 0
    cout << "a %= b: " << a << endl;

    return 0;
}

