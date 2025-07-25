#include <iostream>
using namespace std;

// Program to check if a number is prime or not.
// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
// This program also explains the logic and improves efficiency by checking up to sqrt(n).

int main()
{
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    bool isPrime=true;

    for ( int i=2; i<n-1; i++) // we can aslo used i*i<=n
    {
        if(n%i==0){
            isPrime=false;
            break;
        }
    }

    if (isPrime==true)
    {
        cout<<"prime Number"<<endl;
    }
    else{
        cout<<"Non prime Number"<<endl;
    }
    
   
    return 0;
}