#include<iostream>
using namespace std;

// Function jo ek copy lega
void update(int x) {
    // yaha x sirf ek copy hai original variable ki
    x = x + 5;  
    cout << "Inside function (x): " << x << endl; 
    // ye sirf copy change karega, asli variable nahi
}

int main() {
    int a = 10;   // original variable 'a'
    
    update(a);    // yaha 'a' ki copy bheji ja rahi hai function me
    
    cout << "Inside main (a): " << a << endl;  
    // 'a' ki value waise ki waise 10 hi rahegi
    
    return 0;
}
