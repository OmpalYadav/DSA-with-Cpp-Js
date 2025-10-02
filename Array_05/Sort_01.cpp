#include <iostream>
using namespace std;

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void SortArray(int arr[], int n)
{
    int i = 0;     // start pointer
    int j = n - 1; // end pointer

    while (i < j)
    {
        // move i to the first 1 from left
        while (i < j && arr[i] == 0)
            i++;

        // move j to the first 0 from right
        while (i < j && arr[j] == 1)
            j--;

        // swap if i < j
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << "Before sorting: ";
    print_array(arr, n);
    SortArray(arr, n);
    cout << "After sorting: ";
    print_array(arr, n);

    return 0;
}