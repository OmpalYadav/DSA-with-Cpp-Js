#include<iostream>
using namespace std;

// For loop
// A for loop is used to repeat a block of code a certain number of times.
// Syntax: for(initialization; condition; increment/decrement) { /* code */ }
// Example below prints numbers from 1 to 10.

int main(){

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<endl;
    } 
    
    return 0;
}