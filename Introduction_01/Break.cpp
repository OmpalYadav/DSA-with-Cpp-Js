#include<iostream>
using namespace std;

//Break Statement 
//The 'break' statement is used to terminate the nearest enclosing loop or switch statement prematurely.

int main(){
    int n;
    cin>>n;

    for (int i = 1; i<n; i++)
    { 
        if (i==9)
        {
            break;
        }
        
        cout<<i<<endl;
    }
    
    return 0;
}