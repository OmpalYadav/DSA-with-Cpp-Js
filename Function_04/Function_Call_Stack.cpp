#include <iostream>
using namespace std;

void C() {
    cout << "Inside function C" << endl;
}

void B() {
    cout << "Inside function B" << endl;
    C();  // Calling C
    cout << "Back in function B" << endl;
}

void A() {
    cout << "Inside function A" << endl;
    B();  // Calling B
    cout << "Back in function A" << endl;
}

int main() {
    cout << "Inside main" << endl;
    A();   // Calling A
    cout << "Back in main" << endl;
    return 0;
}
