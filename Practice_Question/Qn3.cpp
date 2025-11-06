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
//A number is called an Armstrong number if the sum of cubes of its digits is equal to the number itself. (For 3-digit numbers)  
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