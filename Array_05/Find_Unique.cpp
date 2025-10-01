#include <iostream>
using namespace std;

int Find_Unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 22, 22, 23, 23, 45};
    int n = sizeof(arr) / sizeof(int);
    int Answer = Find_Unique(arr, n);
    cout << Answer << endl;
    return 0;
}