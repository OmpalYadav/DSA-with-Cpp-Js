#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;

    while (i<n)
    {
        if (n%i==0)
        {
            cout<<i<<" is Not Prime Number"<<endl;
        }
        else{
            cout<<i<<" is a Prime Number"<<endl;
        }
        i++;
    }
    

    return 0;
}