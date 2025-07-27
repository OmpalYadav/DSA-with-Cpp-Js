#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        char ch='A'+i+j-2;
        while (j<=n)
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
Input: 4
A B C D 
B C D E
C D E F
D E F G
*/