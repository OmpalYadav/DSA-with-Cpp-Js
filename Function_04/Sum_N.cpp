#include<iostream>
using namespace std;
//Find the Sum of N Natural Numbers in C++
int sum(int n){
    int add=0;
    for (int i = 1; i <=n; i++)
    {
        add=add+i;
    }
    return add;
}
int main(){
    int n;
    cin>>n;
    int ans=sum(n);

    cout<<"Sum Of Natural Number "<<ans<<endl;
    
    return 0;
}