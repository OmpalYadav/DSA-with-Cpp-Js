#include<iostream>
using namespace std;

/*
    Program to calculate the factorial of a number n.
    The user is prompted to enter a non-negative integer.
    The program then computes and displays n!.
*/
int main(){
    int n;
    cin>>n;
    int fact=1;

    for (int i = 1; i<=n; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial = "<<fact<<endl;
 
    return 0;
}