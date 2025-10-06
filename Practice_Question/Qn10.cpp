#include<iostream>
using namespace std;

int main(){
    float fahrenheit, celsius;
    cin>>fahrenheit>>celsius;
    celsius = (5.0 / 9) * (fahrenheit - 32);
    cout<<celsius<<endl;

    return 0;
}