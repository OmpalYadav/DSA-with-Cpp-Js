#include<iostream>
using namespace std;

// This program demonstrates how a loop works by printing numbers from 1 to n.
// loops in C++ are used to repeat a block of code multiple times until a condition is met.
int main(){

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        cout<<i<<endl;
    }

return 0;
}