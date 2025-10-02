#include <iostream>
#include <algorithm>
using namespace std;

void tripletSum(int arr[], int n, int s) {
    sort(arr, arr + n); // sorting for lexicographical order

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int l = j + 1; l < n; l++) {
                if (arr[i] + arr[j] + arr[l] == s) {
                    cout << arr[i] << " " << arr[j] << " " << arr[l] << endl;
                }
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    int s = 12;

    tripletSum(arr, n, s);

    return 0;
}
