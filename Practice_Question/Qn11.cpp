#include<iostream>
using namespace std;

int main(){
    // 🔢 Question: Given a temperature in Celsius, convert it to Fahrenheit.
   // ✅ Task: Use the formula F = C × (9/5) + 32 to calculate and print the Fahrenheit equivalent. 
    float fahrenheit, celsius;
    cin>>celsius;
    fahrenheit = celsius * (9.0 / 5) + 32;
    cout<<fahrenheit<<endl;

    return 0;
}