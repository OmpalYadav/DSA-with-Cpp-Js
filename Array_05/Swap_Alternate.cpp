#include <iostream>
using namespace std;

void Swap_Alternate(int arr[], int n)
{
    // Swap Alternate
    for (int i = 0; i < n; i = i + 2)
    {
        if ((i + 1) < n)
        {
            swap(arr[i], arr[i + 1]);
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
    Swap_Alternate(arr, n);
    printarray(arr, n);
    return 0;
}