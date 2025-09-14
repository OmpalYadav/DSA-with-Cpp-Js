#include<iostream>
using namespace std; 

int main(){

    //Find charater is UpperCase And Lowercase Or Numebr
    char ch;
    cout<<"Enter Character"<<endl;
    cin>>ch;

    if (ch>='A' && ch<='Z')
    {
        cout<<"The "<<ch<<" is Uppercase"<<endl;
    } else if(ch>='a' && ch<='z'){
        cout<<"The "<<ch<<" is Lowercase"<<endl;
    } else{
        cout<<"The "<<ch <<" is Number"<<endl;

    }

    return 0;
}