#include<iostream>
using namespace std;
int linear_Search(int arr[], int n, int target){
    for (int i = 0; i <n; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int n=sizeof(arr)/sizeof(int);
    int target=8;

    int answer=linear_Search(arr, n,target);
    cout<<answer<<endl;

    return 0;
}