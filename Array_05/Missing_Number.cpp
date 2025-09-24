#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3,4,5, 7, 8, 6, 9,};
    int n = sizeof(arr)/sizeof(int); // size of array

    // sum of all array elements
    int sum = 0;
    for (int i = 0; i < n; i++) // loop pure n tak chalega
    {
        sum += arr[i];
    }

    // sum of numbers from 1 to (n+1)
    int total = (n + 1) * (n + 2) / 2;

    int answer = total - sum;
    cout << "Missing number is: " << answer << endl;

    return 0;
}
