#include<iostream>
using namespace std;

// Square_Pattern

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++) // Outer loop runs n times (for n rows)
    {
        for (int j = 1; j<=n; j++) // Inner loop prints numbers from 1 to n in each row
        {

            cout<<i<<" ";
        }
        cout<<endl;   // Move to the next line after each row
    }

    return 0;
}

/*
InPut:4
1 1 1 1 
2 2 2 2
3 3 3 3
4 4 4 4
*/