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
        char ch='A'+i;
        while (j<=i) //Inner loop
        {
            cout<<char(ch-j)<<" ";
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