#include<iostream>
using namespace std;

int AP(int n){
    int answer=(3*n+7);
    return answer;
}

int main(){
    int n;
    cin>>n;
    int ans=AP(n);
    cout<<ans<<endl;
    return 0;
}