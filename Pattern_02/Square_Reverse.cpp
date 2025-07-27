#include<iostream>
using namespace std;

// Square Pattern Reverse From n to 1 

int main(){
    int n;
    cin>>n;

    for (int i = 0; i <n; i++) // Outer loop runs n times (for n rows)
    {
        for (int j = 1; j <=n; j++) // Inner loop prints numbers from n to 1 in each row
        {
            cout<<n-j+1<<" ";
        }
        cout<<endl;   // Move to the next line after each row
    }

    return 0;
}
/*
Input:4
4 3 2 1 
4 3 2 1
4 3 2 1
4 3 2 1
*/