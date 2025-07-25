#include<iostream>
using namespace std;

// Prints all Even numbers from 1 to n-1 and calculates their sum

int main(){
    int n;
    cin>>n;
    int sum=0;

    for (int i = 1; i<=n; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
            sum= sum+i; // This for only sum even number from 2 to n
        }
        //sum= sum+i;   // We can aslo Print the sum of the Even number from 1 to n
    }

    cout<<sum;

    return 0;
}