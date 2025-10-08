#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        sum = sum + (i * i);
    }
    cout<<"Square "<<n*n<<endl;
    cout << "sum of all sqaure of all natural number = " << sum << endl;
    return 0;
}