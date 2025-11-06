#include<iostream>
using namespace std;

// 🔢 Question: Given an integer n, print the first (n+1) terms of the Fibonacci series starting from 0.
// ✅ Task: Use an iterative approach to generate and display the Fibonacci sequence up to the nth term.

int main(){
    int n;
    cin >> n;

    int a = 0;
    int b = 1;
    for (int i = 0; i <= n; i++)
    {   cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    return 0;
}