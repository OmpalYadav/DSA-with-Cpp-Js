#include<iostream>
using namespace std;

int main(){
    // Initialize the array
    int arr[] = {1, -23, 2, 3, 4, 5, 7, 8};
    int n = sizeof(arr)/sizeof(int);  // Calculate the size of array

    // Initialize indices for minimum and maximum elements
    int minindex = 0;
    int maxindex = 0;

    // Loop through the array to find the indices of min and max elements
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minindex]) {   // Update minindex if current element is smaller
            minindex = i;
        }
        if (arr[i] > arr[maxindex]) {   // Update maxindex if current element is larger
            maxindex = i;
        }
    }

    // Swap the minimum and maximum elements
    int temp = arr[minindex];
    arr[minindex] = arr[maxindex];
    arr[maxindex] = temp;

    // Print the array after swapping
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}