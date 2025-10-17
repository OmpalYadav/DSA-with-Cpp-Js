#include<iostream>
using namespace std;

int Triangle_Pattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            cout << char('A' + n-i)<<" ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Triangle_Pattern(n);
    return 0;
}
