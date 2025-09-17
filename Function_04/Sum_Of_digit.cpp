#include<iostream>
using namespace std;

int sumdigit(int n){
        int ans=0, rem;
        while (n>0)
        {
            rem=n%10;
            n=n/10;
            ans=ans+rem;
        }
        return ans;   
    }
int main(){
        int n;
        cin>>n;
        int sum=sumdigit(n);
        cout<<"The Sum of all digit "<<sum<<endl;
        return 0;
    }
