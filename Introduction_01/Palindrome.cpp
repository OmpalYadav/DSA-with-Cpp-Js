#include <iostream>
using namespace std;

// Palindrome or not

int main()
{

    int n;
    cin >> n;

    int original = n; // original number store kar rahe hain, taaki baad mein compare kar sakein
    int rev = 0;      // reversed number banane ke liye

    while (n > 0)
    {
        int digit = n % 10;     // last digit nikaalte hain
        rev = rev * 10 + digit; // reverse number banana
        n = n / 10;             // last digit hata dete hain
    }

    if (rev == original)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}