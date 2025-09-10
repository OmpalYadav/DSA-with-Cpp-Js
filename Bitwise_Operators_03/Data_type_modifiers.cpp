#include <iostream>
using namespace std;
/*The data type modifiers chnage meaning of data types*/
int main()
{
    cout << sizeof(int) << endl;           // 4
    cout << sizeof(long int) << endl;      // 8 bits bad gyi iski kyu long ne iski capacity bada di
    cout << sizeof(long long int) << endl; // 8
    cout << sizeof(signed int) << endl;    // 4
    cout << sizeof(unsigned int) << endl;  // 4

    return 0;
}