#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int i = 0; i <=n; i++)
    {   //for first Number
       for ( int j= 1; j<=n-i; j++)
       {
                cout<<" ";
       }
       for (int j = 1; j <=i; j++)
       {
            cout<<j;
       }
       //for Second Number
       for (int j = i-1; j >=1; j--)
       {
        cout<<j;
       }

       cout<<endl;
       
    }

    return 0;
}
/*
Output-:5
    1
   121
  12321
 1234321
123454321

*/