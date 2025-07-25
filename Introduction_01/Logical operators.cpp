#include<iostream>
using namespace std;

// This is Logical opertors 
/*
    Logical operators are used to perform logical operations on expressions, resulting in a boolean value (true or false).
    In C++, the main logical operators are:
        - AND (&&): Returns true if both operands are true.
        - OR (||): Returns true if at least one operand is true.
        - NOT (!): Returns true if the operand is false.

    Logical operators are commonly used in decision-making statements (like if, while, for) to combine or invert conditions.
    For example, you can check if a number is within a range, or if at least one of multiple conditions is satisfied.
*/

int main(){

    int a, b;
    cout<<"enter value of both"<<endl;
    cin>>a>>b;
    cout<<((a>b) || (a<b))<<endl;
    cout<<((a>b) && (a<b))<<endl;
    cout<<(!(a>b) || (a<b))<<endl;

    return 0;
}