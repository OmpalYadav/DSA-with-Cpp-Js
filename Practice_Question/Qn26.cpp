#include<iostream>
using namespace std;

//reverse Number
int main(){
    int n;
    cin>>n;

    int reverse=0;
    for (int i = 0; i <=n; i++)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<reverse<<endl;

    return 0;
}