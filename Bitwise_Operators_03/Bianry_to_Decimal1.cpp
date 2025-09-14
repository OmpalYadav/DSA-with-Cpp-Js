#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int rem, ans=0, mul=1;
    while (n>0)
    {   //reminder
        rem=n%10;
        //num ko divide kar do
        n=n/10;
        //ans
        ans=mul*rem+ans;
        //mul
        mul=mul*2;

    }
    cout<<ans<<endl;
    

    return 0;
}