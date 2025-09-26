#include <iostream>
using namespace std;

int sum_of_element(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 5, 15, 1, -5, -1};
    int n = sizeof(arr) / sizeof(int);
    int answer = sum_of_element(arr, n);
    cout << "The sum of all Element " << answer << endl;
    return 0;
}