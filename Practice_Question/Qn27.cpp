#include<iostream>
using namespace std;

//count digit of Number
int main(){
    int n;
    cin>>n;

    double count=0;
    for (int i = 0; i <=n; i++)
    {
        int digit=n%10;
        count++;
        n=n/10;
    }
    cout<<count<<endl;

    return 0;
}