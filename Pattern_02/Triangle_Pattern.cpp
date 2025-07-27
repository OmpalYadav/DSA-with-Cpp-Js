#include<iostream>
using namespace std;

// Triangle_Pattern For "*"

int main(){
    int n;
    cin>>n;
    for (int i = 0; i <n; i++) // Outer loop runs n times (for n rows)
    {       
        for (int j = 0; j<=i; j++) // Inner loop prints numbers from 1 to n in each row
 // We can use here (i+1)or Here J start from 0 to n and run this loop When they not reach a true condition.
        {

            cout<<"*"<<" ";
        }
        cout<<endl;   // Move to the next line after each row
    }

    return 0;
}

/*
InPut:4
* 
* *
* * *
* * * *
*/