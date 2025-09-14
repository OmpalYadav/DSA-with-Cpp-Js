/*
    This program demonstrates the use of the ternary operator in C++.
    The ternary operator (?:) is a conditional operator that provides a shorthand way to write simple if-else statements.
    Its syntax is: (condition) ? expression_if_true : expression_if_false;
*/
#include<iostream>
using namespace std;

// Ternary operator 

int main(){

    int a;
    cout<<"Enter Number"<<endl;
    cin>>a;
    cout<<(a>=0?"Positive number":"Negative Number");
    return 0;
}