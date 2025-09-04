#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        int num=n-j+1;
        while (j<=i)
        {
            cout<<num<<" ";
            num--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
/*
Output-:5
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/