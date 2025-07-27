#include<iostream>
using namespace std;

// Triangle_Pattern For Number Using While Loop

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n) //Outer Loop
    {
        int j=1;
        int value=i;
        while (j<=i) //Inner loop 
        {
            cout<<value<<" "; // We can also solve it why using this method i+(j-1):
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
Input:4
1 
2 3
3 4 5
4 5 6 7
*/