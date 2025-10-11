#include<iostream>
using namespace std;

int main(){

    char ch;
    cin>>ch;
    if (ch>='A' && ch<='Z')
    {
        cout<<ch<<" is Uppercase Character"<<endl;
    }
     else if (ch>='a' && ch<='z')
    {
        cout<<ch<<" is Lowercase Character"<<endl;
    }else{
        cout<<ch<<" is a Digit Number"<<endl;
    }
    return 0;
}