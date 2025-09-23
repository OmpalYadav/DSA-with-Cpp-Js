#include <iostream>
using namespace std;

// Function that takes array as argument
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
      arr[i] =arr[i];
}

int main() {
    int arr[] = {2, 4, 8, 12, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Passing array
    printArray(arr, n);
     for (int i = 0; i < n; i++)
        cout << arr[i]<<endl;;
    
    return 0;
}