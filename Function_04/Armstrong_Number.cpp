#include <iostream>
#include <cmath>
using namespace std;
// For digit counting
int digitcount(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

// for printing armstrong Number
int armstrong(int num, int digit)
{
    int ans = 0, n = num, rem;
    while (n)
    {
        rem = n % 10;
        ans = ans + (int)pow(rem, digit);
        n = n / 10;
    }
    if (ans==num)
    {
        return 1;
    }else{
        return 0;
    }
    
}

int main()
{
    int num;
    cin >> num;

    int digit = digitcount(num);
    int armstrong_num = armstrong(num, digit);
    cout << armstrong_num << endl;

    return 0;
}