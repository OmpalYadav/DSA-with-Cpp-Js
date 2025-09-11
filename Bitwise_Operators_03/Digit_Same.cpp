#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = ans * 10 + i;   // digits ko jodte jao
    }

    cout << ans << endl;
    return 0;
}
