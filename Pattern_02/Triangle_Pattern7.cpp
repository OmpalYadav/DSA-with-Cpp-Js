#include<iostream>
using namespace std;

// Triangle_Pattern For Character Using While Loop

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n) //Outer Loop
    {
        int j=1;
        char ch='A';
        while (j<=i) //Inner loop
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
Input:4
A 
A B 
A B C 
A B C D 
*/