#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "Even" << endl;
    }
   /* else if (n % 2 != 0)
    {
        cout << "odd" << endl;
    }
   */
    else{
        cout<<"this also odd"<<endl;
    }

    return 0;
}