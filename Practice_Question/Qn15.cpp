#include<iostream>
using namespace std;

void palindrome(int n){
// Q. Write a C++ program to check whether a given integer is a palindrome or not.
//    A palindrome number reads the same backward as forward (e.g., 121, 1331).
//    Accept an integer input from the user and display "palindrome" if it is,
//    otherwise display "not palindrome".

    int original=n;
    int reverse=0;
    while (n>0)
    {
        int digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if (reverse==original)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    
}

int main(){
    int n;
    cin>>n;
    palindrome(n);
    return 0;
}