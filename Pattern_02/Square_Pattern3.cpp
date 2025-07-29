#include<iostream>
using namespace std;

// Square_Pattern For Character

int main(){
    int n;
    cin>>n;

    for (int i = 1; i <=n; i++) // Outer loop runs n times (for n rows)
    {       char ch='A';
        for (int j = 1; j<=n; j++) // Inner loop prints numbers from 1 to n in each row
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;   // Move to the next line after each row
    }

    return 0;
}

/*
InPut:4
A B C D 
A B C D
A B C D
A B C D
*/