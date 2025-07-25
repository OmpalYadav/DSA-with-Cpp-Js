#include<iostream>
using namespace std;

/*
    In C++, we use 'cin >>' to take input from the user.
    Example:
        int age;
        cin >> age;

    Notes:
    - 'cin' stands for "console input" and is used with the extraction operator '>>'.
    - You must include <iostream> and use the 'std' namespace or 'using namespace std;'.
    - Multiple inputs can be taken in a single line:
        int a, b;
        cin >> a >> b;
    - Always ensure variables are declared before using them with 'cin'.
*/


int main(){
    int Age;
    cout << "Enter Your Age" << endl;
    cin>>Age;
    cout << "Your Age is " <<Age<<endl;

    //Multiple inputs can be taken in a single line:
    int a,b;
    cin>>a>>b;
    cout<<a+b;

    return 0;
}