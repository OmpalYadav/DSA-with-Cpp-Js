#include<iostream>
using namespace std;

int Square_Pattern(int n){
    for (int i = 1; i <=n; i++)
    {       
        int j=1;
        char ch='A'+i+j-2;
        while (j<=n)
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
    Square_Pattern(n);
    return 0;
}