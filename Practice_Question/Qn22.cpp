#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double P, R, T;
    cin >> P >> R >> T;

    // Simple Interest
    double SI = (P * R * T) / 100;
    cout << "Simple Interest = " << SI << endl;

    // Reverse Calculations
    double Rate = (SI * 100) / (P * T);
    double Principal = (SI * 100) / (R * T);
    double Time = (SI * 100) / (P * R);

    cout << "Rate = " << Rate << endl;
    cout << "Principal Amount = " << Principal << endl;
    cout << "Time = " << Time << endl;

    // Compound Interest
    double A = P * pow((1 + R/100), T); // Final Amount with CI
    double CI = A - P;

    cout << "Final Amount (with CI) = " << A << endl;
    cout << "Compound Interest = " << CI << endl;

    return 0;
}
