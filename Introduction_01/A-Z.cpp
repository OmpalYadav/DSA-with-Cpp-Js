#include<iostream>
using namespace std;

int main(){
    // Hum ese Print kara skte hain or 
     for (char i = 'a'; i <='z'; i++)
     {
        cout<<i<<" ";
     }

     //Or ese bhi

     char ch='A';
     for (int j= 0; j < 26; j++)
     {
        cout<<ch<<" ";
        ch++;
     }
     
    return 0;
}