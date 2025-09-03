#include<iostream>
using namespace std;
//Calculate Simple Interest (SI = PRT/100). and also tell the final amout
int main(){

    float P,R,T,t;
    cout<<"Enter Principal Amount"<<endl;
    cin>>P;
    cout<<"Enter Interest rate"<<endl;
    cin>>R;
    cout<<"Enter Times in years"<<endl;
    cin>>T;

    float SI=(P*R*T)/100;
    cout<<"Simple Interest: "<<SI<<endl;

    float Final_A=P+SI;
    cout<<"Final Amount With SI: "<<Final_A<<endl;
    return 0;
}