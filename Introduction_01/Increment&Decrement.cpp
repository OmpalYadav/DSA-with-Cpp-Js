#include<iostream>
using namespace std;

int main(){

    // Increment concepts'
    // Demonstrating post-increment (a++) and pre-increment (++H)

    // Decrement concepts'
    // Demonstrating post-decrement (T--) and pre-decrement (--L)

    int a=10;
    int b=a++; // kaam-> After Update hoga
    cout<<"B is : "<<b<<endl;
    cout<<"A is : "<<a<<endl;

    int H=10;
    int K= ++H; // Update -> After kaam hoga
    cout<<"K is : "<<K<<endl;
    cout<<"H is : "<<H<<endl;


    //Decrement Concepts'

    int T=12;
    int U=T--; // kaam-> After Update hoga
    cout<<"U is : "<<U<<endl;
    cout<<"T is : "<<T<<endl;

    int L=12;
    int O= --L; // Update -> After kaam hoga
    cout<<"O is : "<<O<<endl;
    cout<<"L is : "<<L<<endl;


    return 0;
}