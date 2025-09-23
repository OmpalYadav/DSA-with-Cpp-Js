#include<iostream>
using namespace std;

void arrayfunction(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i]*2;
    }
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    arrayfunction(arr, n);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}