#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    char ch='A';
    for (int i = 1; i <=n; i++)
    {    
        int j=1;
        while (j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        } cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}