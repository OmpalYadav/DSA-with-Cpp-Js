#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    for (int i = 1; i <=n; i++)
    {   
        char ch='A'; 
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