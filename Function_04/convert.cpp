#include <iostream>
using namespace std;
// in this program we use function to convert 'a' to 'A'
char convert(char ch)
{
    char ans = ch - 'a' + 'A';
    return ans;
}
int main()
{
    char ch;
    cin >> ch;

    char answer = convert(ch);
    cout << answer << endl;
    return 0;
}