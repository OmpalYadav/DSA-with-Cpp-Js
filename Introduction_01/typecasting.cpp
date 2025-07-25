#include<iostream>
using namespace std;
// Demonstration of type casting and type conversion in C++
int main()
{   

    // Conversion Small to big type called implicit

    char Grade = 'a';
    Grade++;
    int value=Grade;
    cout << value<< endl;

    // type casting Explicit

    double price=99.11;
    int NetPrice =(int)price;
    cout<<NetPrice<<endl;

    float x =3.14;
    int XX=int(x);
    cout<<XX<<endl;


    return 0;
}