#include<iostream>
using namespace std;
//Find the Sum of two Number in C++
int sum(int a,int b){
    int add=a+b;
    return add;
}

int main(){
    int a,b;
    cin>>a>>b;
    int ans=sum(a,b);

    cout<<"Sum Of Natural Number "<<ans<<endl;
    
    return 0;
}