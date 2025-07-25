#include<iostream>
using namespace std;

// Arithmetic operators are used to perform mathematical operations like addition (+), subtraction (-), 
// multiplication (*), division (/), and modulus (%).

int main(){
    int a;
    int b;

    cout<<"Enter both value "<<endl;
    cin>>a>>b;

    cout<<"Sum of :"<<a+b<<endl;
    cout<<"Diffrence of :"<<a-b<<endl;
    cout<<"divide of :"<<a/b<<endl;
    cout<<"Multiple of :"<<a*b<<endl;
    cout<<"Modulo of :"<<a%b<<endl;

    // type casting let's understand with help of exapmle Explicit

    cout<<(5/(int)2)<<endl;
    

    return 0;
}
