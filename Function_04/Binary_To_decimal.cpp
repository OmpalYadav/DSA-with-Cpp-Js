#include <iostream>
using namespace std;

int BinaryToDec(int n)
{
    int rem, ans = 0, mul = 1;
    while (n > 0)
    {
        rem = n % 10;
        ans = mul* rem + ans;
        n = n / 10;
        mul = mul * 2;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int answer = BinaryToDec(n);
    cout << answer << endl;

    return 0;
}