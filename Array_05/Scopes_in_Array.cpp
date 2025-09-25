#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    cout<<"Print number in function"<<endl;
    arr[0]=120;
    for(int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr[]={1,2,3,54,45,6,45,7,58};
    int n=sizeof(arr)/sizeof(int);

    printarr(arr,n);

    cout<<"Print Number in Main"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }  cout<<endl;

    return 0;
}