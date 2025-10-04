#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age>18){
        cout<<"You Can Vote"<<endl;
    }else{
        cout<<"You can not vote"<<endl;
    }  
    //Armstrong number
int n;
cin>>n;

int original =n;
int sum=0;

while(n>0)
{
    int digit=n%10;
    sum+=digit*digit*digit;
    n=n/10;
}
if(sum==original){
    cout<<"number "<<sum<<" is armstrong ";
}else{
        cout<<"number "<<sum<<" is not armstrong ";
}
    return 0;

} 