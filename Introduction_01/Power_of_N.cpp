#include<iostream>
using namespace std;

//power of N number
int main(){

   int n, Pow, num;
   cout<<"Enter Number"<<endl;
   cin>>n;

   cout<<"Enter Power Number"<<endl;
   cin>>Pow;
    num=n;

    for (int  i = 1; i <Pow; i++)
    {
        num=num*n;
    }
    cout<<num;
    return 0;
}
