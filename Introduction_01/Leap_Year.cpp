#include<iostream>
using namespace std;
//Program to Check Whether a Year is a Leap Year or Not in C++

int main(){
 int year;
 cin>>year;
    if(year % 400 == 0)
        cout << year << " is a Leap Year";
        
    else if(year % 4 == 0  && year % 100 != 0)
        cout << year << " is a Leap Year";
        
    else
        cout << year << " is not a Leap Year";
    
    return 0;
}