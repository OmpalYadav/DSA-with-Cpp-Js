#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 23, 5, 5, 6, 5, 6, 5};
    int n = sizeof(arr)/sizeof(int);

    int minindex = 0;
    int maxindex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minindex]) {
            minindex = i;
        }
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
    }

    // swap min & max
    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;

    // print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}