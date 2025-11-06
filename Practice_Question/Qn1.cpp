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
    
    int n;
    cin>>n;
    char ch='A';
    for (int i = 0; i < n; i++)
    {
        cout<<ch<<" ";
        ch++;
    }
    
    return 0;
}