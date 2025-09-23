#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5, 51, 12};
    int n = sizeof(arr) / sizeof(int);
    ReverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}