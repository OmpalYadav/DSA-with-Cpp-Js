#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)   // rows
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}
/*
   Output-:4
   1
  12
 123
1234

*/