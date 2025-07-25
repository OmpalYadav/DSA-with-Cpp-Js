#include<iostream>
using namespace std;

// The continue statement skips the current iteration of the loop and moves to the next iteration.
// In the code below, when i == 5, the continue statement is executed, so 5 is not printed.

int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        if (i==5)
        {
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}