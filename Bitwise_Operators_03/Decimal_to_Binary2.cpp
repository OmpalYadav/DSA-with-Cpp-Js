#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rem, ans=0, mul=1;

    while (n>0)
    {
        //reminder
        rem =n%2;
        //quotient
        n=n/2;
        //ans
        ans=rem*mul+ans;
        //mul
        mul=mul*10;

    }
    cout<<ans<<endl;

    return 0;
}