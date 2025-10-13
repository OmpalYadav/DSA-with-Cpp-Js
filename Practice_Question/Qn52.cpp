#include<iostream>
using namespace std;

int Triangle_Pattern(int n){
    int num=1;
    for (int i = 1; i <=n; i++)
    {    
        int j=0;
        int back=num+i-1;
        while (j< i)
        {
            cout<<back-j<<" ";
            j++;
        } 
        num=back+1;
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Triangle_Pattern(n);
    return 0;
}