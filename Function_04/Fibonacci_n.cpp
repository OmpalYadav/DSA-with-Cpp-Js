#include<iostream>
using namespace std;

int Fibo(int n){
    int i, last , prev, curr;
    if(n<0){
        cout<<"Enter a Valid Number";
        return 0;
    }else{
        last=0;
        prev=1;
        curr=1;
    }
    for ( i = 3; i <=n; i++)
    {
        curr=last+prev;
        last=prev;
        prev=curr;
    }
    return curr;
}

int main(){
int n;
cin>>n;

int answer=Fibo(n);
cout<<answer<<endl;

    return 0;
}