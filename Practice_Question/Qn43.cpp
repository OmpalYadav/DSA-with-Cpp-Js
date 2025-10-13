#include<iostream>
using namespace std;

int Square_Pattern(int n){
       char ch='A';
    for (int i = 1; i <=n; i++)
    {     
        for (int j = 1; j <=n; j++)
        {
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    Square_Pattern(n);
    return 0;
}