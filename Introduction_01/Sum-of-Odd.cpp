#include<iostream>
using namespace std;

//Sum of Odd Number in while Loop

int main(){
    int n;
    cin>>n;
    int sum=0, i=1;
    while (i<=n)
    {
        cout<<i<<endl;
        sum=sum+i;
        i=i+2;
    }

    cout<<"Sum of Odd Number "<<sum<<endl;
    
    return 0;
}