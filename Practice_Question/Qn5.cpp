#include<iostream>
using namespace std;

int main(){

    int mark;
    cin>>mark;
    if (mark>=80 && mark<=100)
    {
        cout<<"First";
    }
     else if (mark>=60 && mark<=100)
    {
        cout<<"second";
    }
     else if (mark>=50 && mark<=100)
    {
        cout<<"third";
    }
     else if (mark>=35 && mark<=100)
    {
        cout<<"pass";
    }else{
        cout<<"fail"<<endl;
    }

    int n;
    cin>>n;

    if(n%2==0){
        cout<<"Even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    return 0;
}