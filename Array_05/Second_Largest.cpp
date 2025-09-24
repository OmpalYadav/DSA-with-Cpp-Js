#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int arr[] = {2, 12, 54, 6, 1, 58, 48, 12};
    int n = sizeof(arr) / sizeof(int);

    int answer = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > answer)
        {
            answer = arr[i];
        }
    }
    
        int second_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (answer != arr[i])
        {
            second_largest = max(second_largest, arr[i]);
        }
    }
    cout<<second_largest<<endl;

    return 0;
}