#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=0;
    int back= n*n;
    char ch='A'+back-1;
   
    while (i<n)
    {   
        int j=1;
        while (j<=n)
        {   
            cout<<ch<<" ";
            ch--;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
/*
Input:4
P O N M 
L K J I
H G F E
D C B A
*/