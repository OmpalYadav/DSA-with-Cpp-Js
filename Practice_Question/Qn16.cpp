#include<iostream>
#include<math.h>
using namespace std;

int main(){
// Q. Write a C++ program to calculate the power of a number.
//    Accept two integer inputs from the user: a base number `n` and an exponent `p`.
//    Use the built-in `pow()` function to compute n raised to the power p (n^p),
//    and display the result in the format: "Power of n is = result".

    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int p;
    cout<<"Enter Power"<<endl;
    cin>>p;
   cout<<"Power of "<<n<<" is = "<<pow(n,p);
    return 0;
}