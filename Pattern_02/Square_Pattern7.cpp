#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i+j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
    return 0;
}

/*
Input: 4
1 2 3 4 
2 3 4 5
3 4 5 6
4 5 6 7
*/