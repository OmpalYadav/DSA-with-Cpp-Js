#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    if (ch>='A' && ch<='Z')
    {
        cout<<"Character Uppercase"<<endl;
    }
     else if (ch>='a' && ch<='z')
    {
        cout<<"Character Lowercase"<<endl;
    }else{
        cout<<"Digit is Number"<<endl;
    }

    return 0;
}