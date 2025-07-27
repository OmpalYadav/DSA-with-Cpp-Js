#include<iostream>
using namespace std;

// Square_Pattern For Character

int main(){
    int n;
    cin>>n;
    char ch='A';
    for (int i = 1; i <=n; i++) // Outer loop runs n times (for n rows)
    {       
        for (int j = 1; j<=n; j++) // Inner loop prints numbers from 1 to n in each row
        {

            cout<<ch<<" ";
        }
        cout<<endl;   // Move to the next line after each row
            ch++;
    }

    return 0;
}

/*
InPut:4
A A A A 
B B B B 
C C C C 
D D D D 
*/