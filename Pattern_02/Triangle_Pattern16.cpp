#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // We can aslo use this method to prints thre type of patterns

    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= n - i + 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
/*
Output-:5
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/