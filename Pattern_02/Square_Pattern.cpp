#include<iostream>
using namespace std;

// Square Pattern From 1 to N 

int main(){
    int n;
    cin>>n;

    for (int i = 0; i <n; i++) // Outer loop runs n times (for n rows)
    {
        for (int j = 1; j <=n; j++) // Inner loop prints numbers from 1 to n in each row
        {
            cout<<j<<" ";
        }
        cout<<endl;   // Move to the next line after each row
    }

    return 0;
}

/*
Input:4
1 2 3 4 
1 2 3 4
1 2 3 4
1 2 3 4
*/