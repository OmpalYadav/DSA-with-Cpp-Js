#include <iostream>
using namespace std;
int trailingZeroes(int num)
{
    int ans = 0;
    while (num >= 5)
    {
        ans = ans + num / 5;
        num = num / 5;
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;
    int answer = trailingZeroes(n);
    cout << answer << endl;

    return 0;
}