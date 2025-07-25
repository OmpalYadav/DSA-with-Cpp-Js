#include <iostream>
using namespace std;

//This is real life Example of boolean 

int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    cout << "Old enough to vote!";
  } else {
    cout << "Not old enough to vote.";
  }
  return 0;
}
