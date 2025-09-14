#include<iostream>
using namespace std;

// This program calculates and prints all numbers from 1 to n that are divisible by 3,
// and computes their sum.

int main(){

    int n;
    int sum=0;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%3==0) // Sum of 1 to n which is divisible by 3 
        {
            cout<<i<<endl;    
            {
                sum=sum+i; 
            }
        }
    } 
    cout<<"summ = "<<sum<<endl;

    return 0;
}