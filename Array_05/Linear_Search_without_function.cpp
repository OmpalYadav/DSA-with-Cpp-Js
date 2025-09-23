#include<iostream>
using namespace std;

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = sizeof(arr) / sizeof(int);
    int target = 5;
    int answer = -1; // agar na mile to -1

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            answer = i; // index save karo
            break;      // mil gaya to loop se bahar nikal jao
        }
    }

    cout << answer << endl;
    return 0;
}
