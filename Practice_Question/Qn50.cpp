#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    for (int i = 1; i <=n; i++)
    {
        for (int j = i; j >=1; j--) //i-j+1
        {
            cout<<j<<" ";
        }cout<<endl;
    }
    
}

int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}