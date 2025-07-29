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
        while (j<=i) //Inner loop
        {   char ch='A'+i+j-2;
            cout<<ch<<" ";
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
B C
C D E
D E F G
*/