#include<iostream>
using namespace std;

int Triangle_Pattern(int n){

    for (int i = 1; i <=n; i++)
    {   int ans=i;
       for (int j = 1; j<=i; j++)
        {
            cout<<ans<<" "; //i+j+1
            ans++;
        }cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}