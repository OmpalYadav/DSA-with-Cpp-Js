#include<iostream>
#include<math.h>
using namespace std;

int power_n(int n){
    int original=n;
    int reverse=0;

    while (n>0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    return pow(original,reverse);
}


int main(){

int n;
cin>>n;
int ans=power_n(n);
cout<<ans;
    return 0;
}