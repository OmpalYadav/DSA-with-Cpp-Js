#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int fact = 1;
    int facteven = 1;
    int factodd = 1;
    int sum = 0;
    int oddsum = 0;
    int sumeven = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        fact = fact * i;
        if (i % 2 == 0)
        {
            sumeven += i;
            facteven *= i;
        }
        if (i % 2 != 0)
        {
            oddsum += i;
            factodd *= i;
        }
    }
    cout << "Sum of Even Number " << sumeven << endl;
    cout << "Sum of Even Number " << oddsum << endl;
    cout << "Sum of all Number " << sum << endl;
    cout << "Fact of all Number " << fact << endl;
    cout << "Fact of Even Number " << facteven << endl;
    cout << "Fact of odd Number " << factodd << endl;

    return 0;
}