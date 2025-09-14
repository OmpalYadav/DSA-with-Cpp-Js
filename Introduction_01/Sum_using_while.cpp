#include<iostream>
using namespace std;
//Print sum all natural number 1 to n using while loop

int main(){

    int n;
    cin>>n;
    int sum=0;
    int i=1;

    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    cout<<"Sum of Number is "<<sum<<endl;
    
    return 0;
}