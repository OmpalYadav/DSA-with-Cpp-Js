#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = n; i >= 1; i--) {
        ans = ans * 10 + i;   // digits ko jodte jao
    }

    cout << ans << endl;
    return 0;
}
