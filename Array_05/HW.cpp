#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 2, 3, 5, 35, 3};
    int n = sizeof(arr) / sizeof(int);

    int sum = 0;
    int product=1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        product=product*arr[i];
    }
    cout <<"Sum of Array "<< sum << endl;
    cout<<"Product of Array "<<product<<endl;

    return 0;
}