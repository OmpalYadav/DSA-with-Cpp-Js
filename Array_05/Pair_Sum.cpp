#include <iostream>
#include <algorithm>
using namespace std;

void pairSum(int arr[], int n, int s) {
    // Pehle sort kar lo, taaki pairs lexicographical order me aaye
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == s) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int s = 5;

    pairSum(arr, n, s);

    return 0;
}
