#include<iostream>
using namespace std;

//Take two numbers as input and print their sum, difference, product, and division.
int main(){
int a,b;
cout<<"Enter Both Number"<<endl;
cin>>a>>b;

int sum=a+b;
int diff=a-b;
int product=a*b;
float div=a/b;

cout<<sum<<endl<<diff<<endl<<product<<endl<<div<<endl;

return 0;

}