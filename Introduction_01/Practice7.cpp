#include<iostream>
using namespace std;

int main(){
    // Find Character is uppercase or lowecase Yeah Number

    char ch;
    cin>>ch;
    
    if (ch>='A' && ch<='Z')
    {
        cout<<ch<<" is A Upper Case"<<endl;
    }
    else if (ch>='a' && ch<='z')
    {
        cout<<ch<<" is A Lower Case"<<endl;
    }
    else{
        cout<<ch<<" is a Number"<<endl;
    }
    
    return 0;
}