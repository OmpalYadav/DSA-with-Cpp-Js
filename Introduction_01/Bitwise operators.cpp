#include <iostream>
using namespace std;

int main() {
    int a = 5;   // Binary: 0101
    int b = 3;   // Binary: 0011

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl; // 0101 & 0011 = 0001 (1)

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl; // 0101 | 0011 = 0111 (7)

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl; // 0101 ^ 0011 = 0110 (6)

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;       // ~0101 = 1010 (in 2's complement: -6)

    // Left Shift
    cout << "a << 1 = " << (a << 1) << endl; // 0101 << 1 = 1010 (10)

    // Right Shift
    cout << "a >> 1 = " << (a >> 1) << endl; // 0101 >> 1 = 0010 (2)

    return 0;
}

/*
Explanation:
- & (AND): Sets each bit to 1 if both bits are 1.
- | (OR): Sets each bit to 1 if one of two bits is 1.
- ^ (XOR): Sets each bit to 1 if only one of two bits is 1.
- ~ (NOT): Inverts all the bits.
- << (Left Shift): Shifts bits to the left, adds 0s on the right.
- >> (Right Shift): Shifts bits to the right, discards bits on the right.
*/