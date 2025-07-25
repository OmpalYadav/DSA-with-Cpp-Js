#include<iostream>
using namespace std;
//Find the Sum of N Natural Numbers in C++
int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }

    cout<<"Sum Of Natural Number "<<sum<<endl;
    
    return 0;
}