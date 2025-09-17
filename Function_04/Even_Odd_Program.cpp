#include <iostream>
using namespace std;
// Check Number is Even or Odd

// Function Signature
// Yaha return type 'int' rakha hai kyunki function ek value return karega (0 ya 1).
// 0 ka matlab hai "Odd", aur 1 ka matlab hai "Even".
int IsEven(int a)
{
    if (a % 2 != 0)   // agar number 2 se divide nahi hota to odd hai
    {
        return 0;     // 0 return ka matlab Odd
    }
    else
    {
        return 1;     // 1 return ka matlab Even
    }
}

int main()
{
    int num;
    cin >> num;

    // Yaha function call ho raha hai. IsEven(num) ya to 0 ya 1 return karega.
    if (IsEven(num))  // agar 1 mila to true hoga → Even number
    {
        cout << "Number " << num << " is Even" << endl;
    }
    else              // agar 0 mila to false hoga → Odd number
    {
        cout << "Number " << num << " is Odd" << endl;
    }

    return 0;
}
