#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <=n; i++)     // Outer loop to handle rows
    {
      
      for (int j = 1; j <=n-i+1; j++)   // We can also use this method to print this type of Triangle Print row items
        {
            cout << i;
        }

        cout << endl; // Move to the next line after each row
    }

    return 0;
}
/*
input: 4
1111
222
33
4
*/