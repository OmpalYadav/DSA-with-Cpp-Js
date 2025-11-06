#include<iostream>
using namespace std;

int main(){
    // 🔢 Question: Given a temperature in Fahrenheit, convert it to Celsius.
   // ✅ Task: Use the formula C = (5/9) × (F − 32) to calculate and print the Celsius equivalent. 
    float fahrenheit, celsius;
    cin>>fahrenheit>>celsius;
    celsius = (5.0 / 9) * (fahrenheit - 32);
    cout<<celsius<<endl;
     return 0;
}