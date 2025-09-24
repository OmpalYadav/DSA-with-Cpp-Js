#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 6, 1, 2, 456, 45, 58, 75, 56, 4, 12, -45, 12, -51};
    int n = sizeof(arr) / sizeof(int);

    int answer = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < answer)
        {
            answer = arr[i];
        }
    }
    int smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (answer != arr[i])
        {
            smallest = min(smallest, arr[i]);
        }
    }

    cout << smallest << endl;

    return 0;
}