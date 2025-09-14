#include<iostream>
using namespace std;
int main(){

    //NOW CHECK AGE IF YOU ABOVE 18+ THEN YOU CAN VOTE 
    int Age;
    cout<<"Enter Your Age Please"<<endl;
    cin>>Age;

    if(Age>18){
        cout<<"You can Vote"<<endl;
    }else{
        cout<<"You can't Vote"<<endl;
    }
    
    return 0;
}