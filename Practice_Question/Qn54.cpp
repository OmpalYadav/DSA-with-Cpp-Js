#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    for (int i = 1; i <=n; i++)
    {    
        int j=n;
        while (j>=n-i+1)
        {
            cout<<j<<" ";
            j--;
        } cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}