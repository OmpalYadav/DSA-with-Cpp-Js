#include<iostream>
using namespace std;
/*
    Use the switch statement to select one of many code blocks to be executed.
    This example demonstrates a simple menu using switch.
*/

// We can say that we use nested loop
int main() {

  char ch='1';
  int num=1;
  switch (ch) {
  case '1':
    switch (num)
    {
    case 1:
        cout<<"The Output is "<<num<<endl;
        break;
    
    default:
        break;
    }
    break;
  
  default:
    cout<<"This is Not Working"<<endl;
    break;
  }
    return 0;
}