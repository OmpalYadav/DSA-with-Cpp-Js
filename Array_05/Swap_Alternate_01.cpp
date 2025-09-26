#include <iostream>
using namespace std;

void Swap_Alternate(int arr[], int n)
{
    // Swap alternate elements in the array
    for (int i = 0; i < n; i += 2)
    {
        if ((i + 1) < n) // check if next element exists
        {
            // Swap arr[i] and arr[i+1]
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 3, 5, 7, 5, 8, 2, 64, 45, 5, 11};
    int n = sizeof(arr) / sizeof(int);

    cout << "Original Array: ";
    printarray(arr, n);

    Swap_Alternate(arr, n);

    cout << "After Swapping Alternate: ";
    printarray(arr, n);

    return 0;
}
