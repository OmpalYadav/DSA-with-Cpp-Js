#include<iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int ans=0;
    int i=1;
    while (n!=0)
    {
        int bit= n&1;
        ans=(bit* i)+ans;
        n=n>>1;
        i=i*10;
    }
    cout<<ans<<endl;

    return 0;
}