#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    for (int i = 1; i <=n; i++)
    {   
        int j=1;
        char ch='A'+i-j; 
        while (j<=i)
        {
            cout<<ch<<" ";
            j++;
            ch++;
        } 
         cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}