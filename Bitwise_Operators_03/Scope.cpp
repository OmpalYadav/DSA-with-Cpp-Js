#include<iostream>
using namespace std;
    //In local Scope Variables declared inside a functions and block of code then you can access 

    void myfunction(){
        int x =5;
        cout<<x<<endl;
    }
    int x=10;
int main(){
    // Scope defines the area in the code where a name of variable and function is valid and we can access them without any proble 
    // We have two_type of scope first local scope and second global scope
    myfunction();
   // cout<<x; //'x' was not declared in this scope
    cout<<x<<endl;
    // in global scope variables declared outside any function and scope and are accessible throghout the file after their declaration


    return 0;
}