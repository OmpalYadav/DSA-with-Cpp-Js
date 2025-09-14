#include<iostream>
using namespace std;
//Check Number Even+ Or Odd-

int main(){
    int a;
    cout<<"Enter Number"<<endl;
    cin>>a;

    if (a%2==0)
    {
        cout<<"Numebr "<<a<<" is Even"<<endl;
    }else{
        cout<<"Numebr "<<a<<" is Odd"<<endl;
    }
    
    return 0;
}