#include <iostream>
using namespace std;

int main()
{
// 🔢 Question: Given a year 'n', determine whether it is a leap year or not.
// ✅ Task: Apply leap year rules:
// - If divisible by 400 → Leap Year
// - Else if divisible by 4 but not by 100 → Leap Year
// - Else → Not a Leap Year
    int n;
    cin >> n;

    if (n % 400 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else if (n % 4 == 0 && n % 100 != 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "Not a leap Year" << endl;
    }

    return 0;
}