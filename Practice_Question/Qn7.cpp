#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // Modular Exponentiation

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