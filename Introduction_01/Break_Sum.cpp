#include<iostream>
using namespace std;

// This program calculates the sum of numbers from 1 to n using a for loop.
// It demonstrates the use of the 'break' statement to stop the loop when i reaches 5.

int main(){

    int n;
    int sum=0;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
        //We can aslo use break/Continue statement 
        if(i==5){
        break;
        }
    } 
    cout<<"summ = "<<sum<<endl;

    return 0;
}