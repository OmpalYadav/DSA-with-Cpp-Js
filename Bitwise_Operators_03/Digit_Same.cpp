#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        ans = ans * 10 + i;  
    }

    cout << ans << endl;
    return 0;
}
