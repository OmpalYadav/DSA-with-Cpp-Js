#include<iostream>
using namespace std;

void reversearr(int arr[],int n){
    for (int i = n-1; i>=0; i--)
    {
        cout<< arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int n=sizeof(arr)/sizeof(int);
    reversearr(arr, n);
    return 0;
}