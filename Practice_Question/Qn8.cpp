#include <iostream>
using namespace std;

// 🔢 Question: Given an integer n, find the nth term of the Fibonacci series.
// ✅ Task: Use iterative approach to compute the nth Fibonacci number efficiently.

int main()
{
    int n, a, b, c;
    cin >> n; // 📥 Input: nth term to find from Fibonacci series

    if (n < 0)
    {
        return 0; 
    }
    else
    {
        a = 0; 
        b = 1; 
        c = 1; 
    }
    // 🔁 Loop to calculate Fibonacci terms from F(2) to F(n)
    for (int i = 2; i <= n; i++)
    {   
        c = a + b; // ➕ Current term = sum of previous two
        a = b;     // 🔄 Shift a to b
        b = c;     // 🔄 Shift b to current term
    }

    cout << c; 
    return 0;  
}