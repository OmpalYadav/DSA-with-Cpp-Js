#include<iostream>
using namespace std;

// Nested loop
// Nested loops ka matlab hai ek loop ke andar doosra loop lagana.
// Iska use tab hota hai jab hume kisi 2D structure (jaise matrix ya pattern) par kaam karna ho.
// Jaise yahan par hum ek square pattern print kar rahe hain, isliye ek loop rows ke liye aur doosra columns ke liye use kiya gaya hai.

int main(){
    int n;
    cin>>n;

    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<" * ";
        }
    cout<<endl;
        
    }
 
        return 0;
}