#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;   // example: 123

    int ans = 0;
    while (n != 0) {
        int digit = n % 10;       // last digit nikalo
        ans = ans * 10 + digit;   // reverse order me jodo
        n = n / 10;               // last digit hatao
    }

    cout << ans << endl;          // example: 321
    return 0;
}
