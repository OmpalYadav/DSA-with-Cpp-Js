#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j * j *j<< " ";
            j++;
        }
        cout << endl;
        i++;

    }

    return 0;
}
/*
Output = 5
1 8 27 64 125 
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
1 8 27 64 125
*/