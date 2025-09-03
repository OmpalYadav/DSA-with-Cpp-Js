#include<iostream>
using namespace std;
/*
    Use the switch statement to select one of many code blocks to be executed.
    This example demonstrates a simple menu using switch.
*/


int main(){

  int day;
  cin>>day;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
    return 0;
}