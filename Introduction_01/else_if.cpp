#include<iostream>
using namespace std;

// Else if 

int main(){
    int mark;
    cout<<"Enter Marks"<<endl;
    cin>>mark;

    if(mark>=90){
        cout<<"Student Have Grade A"<<endl;
    } else if (mark>=80 && mark<90)
    {
        cout<<"Student Have Grade B"<<endl;

    } else {
        cout<<"Student Have Grade C"<<endl;

    }
    
    return 0;
}
