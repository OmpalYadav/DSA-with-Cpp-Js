#include <iostream>
using namespace std;

// Reverse Triangle
int main()
{

    int n;
    cin >> n;

    int num=1;
    for (int i = 0; i <n; i++)
    {   
        int back=num+i-1;
        for (int j =0; j<i; j++)
        {
            cout<<back-j<<" ";

        }
        num= back+1;

        cout << endl;
    }

    return 0;
}

/*
input:4
1 
3 2 
6 5 4 
10 9 8 7 
*/