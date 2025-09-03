#include<iostream>
using namespace std;
//Fahrenheit to Celsius.

int main() {
    float fahrenheit, celsius;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (5.0 / 9) * (fahrenheit - 32);

    cout << "Temperature in Celsius: " << celsius << endl;

    //Celsius to Fahrenheit 
    cout<<"Enter Temperature in celsius"<<endl;
    cin>>celsius;

    fahrenheit=(celsius*1.8)+32;
    cout<<"Temperature in fahrenheit: "<<fahrenheit<<endl;

    return 0;
}
