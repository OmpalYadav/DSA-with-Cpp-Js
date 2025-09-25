#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,5,6,48,1,56,5,23,4};
    int n=sizeof(arr)/sizeof(int);
    int last=arr[n-1];

    for (int i = n-2; i >=0; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0] = last;

    // print rotated array
    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        
    return 0;
}