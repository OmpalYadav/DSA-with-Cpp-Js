#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Modular Exponentiation
    // 🔢 Question: Given three integers x, n, m — calculate (x^n) % m efficient0ly.
    // ✅ Task: Perform Modular Exponentiation using Binary Exponentiation (O(log n) time)

    int x, n, m;
    cin >> x >> n >> m;

    int ans = 1;
    long long base=x%m;
    while (n > 0)
    {   
        if(n%2==1){
            ans=(ans*base)%m;
        }
        base=(base*base)%m;
        n=n/2;
    }
    cout << ans%m;

    return 0;
}