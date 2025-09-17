#include <iostream>
using namespace std;

int Power()
{   int a,b;
    cin>>a>>b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{ 
    
    /*
    int a,b;
    cin >> a >> b;
    int answer = Power(a, b);
    cout << answer;

    int c, d;
    cin >> c >> d;
    answer = Power(c, d);
    cout << answer;
*/
    cout<<"Power of = "<<Power();
    cout<<"Power of = "<<Power();
    cout<<"Power of = "<<Power();

    return 0;
}
/*
Output-:4,2
16
*/