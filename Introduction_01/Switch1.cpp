#include<iostream>
using namespace std;
int main(){
    char op;
    cin>>op;
    int Num1, Num2,result;
    cin>>Num1>>Num2;

    switch (op)
    {
    case '+':
        result=Num1+Num2;
        cout<<result;
        break;
     case '-':
        result=Num1*Num2;
        cout<<result;
        break;
     case '*':
        result=Num1*Num2;
        cout<<result;
        break;
     case '/':
        result=Num1/Num2;
        cout<<result;
        break;
    
    default:
    cout<<"NA";
        break;
    }





    return 0;
}