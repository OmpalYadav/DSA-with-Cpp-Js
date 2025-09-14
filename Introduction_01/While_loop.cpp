#include<iostream>
using namespace std;
// The while loop is used to execute a block of code repeatedly as long as a given condition is true.
// Syntax:
// while(condition) {
//     // code to execute
// }
// In this program, the while loop prints numbers from 1 to n.

int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
    
    return 0;
}