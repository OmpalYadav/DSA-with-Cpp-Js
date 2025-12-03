#include <iostream>
#include <math.h>
using namespace std;

void Age_checking(int age)
{
    if (age >= 18)
    {
        cout << "Your age is " << age << " so You Can Vote" << endl;
    }
    else
    {
        cout << "Your age is " << age << " so You Can not Vote" << endl;
    }
}

void Armstrong_Number(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }

    if (sum == original)
    {
        cout << "The " << original << " is Armstrong Number" << endl;
    }
    else
    {
        cout << "The " << original << " is not Armstrong Number" << endl;
    }
}

int main()
{
    int age, n;
    cin >> age>>n;
    Age_checking(age);
    Armstrong_Number(n);

    return 0;
}

