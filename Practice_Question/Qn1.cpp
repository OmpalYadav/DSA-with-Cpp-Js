#include<iostream>
using namespace std;

int main(){
    //Task -: A-Z and a-z

    for (char i = 'A'; i <='Z'; i++)
    {
        cout<<i<<" ";
    }cout<<endl;
     for (char i = 'a'; i <= 'z'; i++)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    char ch='A';
    for (int i = 0; i < 26; i++)
    {
        cout<<ch<<" ";
        ch++;
    }
    
    return 0;
}