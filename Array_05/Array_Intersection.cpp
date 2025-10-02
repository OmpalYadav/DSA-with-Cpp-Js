#include <iostream>
#include <algorithm>
using namespace std;

void Array_Intersection(int arr1[], int n, int arr2[], int m) {
    sort(arr1, arr1 + n);  // sort both arrays
    sort(arr2, arr2 + m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            i++;
        } 
        else if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";  // print intersection
            i++;
            j++;
        } 
        else {
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 2, 3, 4, 3, 4};
    int arr2[] = {1, 2, 3, 4};
    int n = sizeof(arr1) / sizeof(int);
    int m = sizeof(arr2) / sizeof(int);

    Array_Intersection(arr1, n, arr2, m);

    return 0;
}
