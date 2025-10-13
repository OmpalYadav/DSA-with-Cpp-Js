#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (i < n)
    {
        int j = 1;
        while (j <= n)
        {   char ch='A'+n-j;
            cout << ch << " ";
             ch--;
             j++;
           
        }
        cout << endl;
        i++;
    }

    return 0;
}

/*
Input:4

D C B A 
D C B A
D C B A
D C B A
*/