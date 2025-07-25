#include <iostream>
#include <cmath>  // for pow()
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
        sum += pow(digit, 3);  // cube of digit
        n = n / 10;
    }

    if (sum == original) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not an Armstrong Number" << endl;
    }

    return 0;
}
