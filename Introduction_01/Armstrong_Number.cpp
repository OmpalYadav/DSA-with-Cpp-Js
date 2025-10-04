#include <iostream>
using namespace std;
//A number is called an Armstrong number if the sum of cubes of its digits is equal to the number itself. (For 3-digit numbers)

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;  // cube without pow()
        n = n / 10;
    }

    if (sum == original) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}

/*
153
123
*/