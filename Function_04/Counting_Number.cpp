#include<iostream>
using namespace std;

// Function Signature 
// Yaha 'void' ka matlab hai ki function koi value return nahi karega.
// Iska kaam sirf output print karna hai, isliye return type 'void' rakha hai.
void CountingNumber(int n){  
    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;  // yaha direct print ho raha hai, isliye return ki zarurat nahi hai
    }
}

int main(){
    int n;
    cin >> n;

    // Function call
    // Yaha CountingNumber bas numbers ko print karega, koi value return nahi karega.
    CountingNumber(n);

    return 0;
}
