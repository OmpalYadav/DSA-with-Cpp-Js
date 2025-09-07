#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // Top
    for (int i = 0; i < n; i++)
    {

        // leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << "*";

        if (i != 0)
        {
            // inner spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    // Bottom half
    for (int i = n - 2; i >= 0; i--)
    {
        // leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != 0)
        {
            // inner spaces
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}

/*Output-:
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/