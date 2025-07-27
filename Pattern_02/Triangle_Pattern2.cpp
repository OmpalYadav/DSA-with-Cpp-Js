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
        while (j<=i) //Inner loop
        {
            cout<<i<<" ";
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
2 2
3 3 3
4 4 4 4
*/