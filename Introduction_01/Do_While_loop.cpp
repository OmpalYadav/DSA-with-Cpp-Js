#include<iostream>
using namespace std;
// 
/**
 Notes about do-while loop:
 - The do-while loop is a post-tested loop, meaning its body executes at least once before the condition is checked.
 - Syntax:
      do {
          // loop body
      } while (condition);
 - Useful when you want the loop body to run at least once, regardless of the condition.
 - The condition is evaluated after each iteration.
 */
int main(){
    int n;
    cout<<"Enter Number"<<endl;
    cin>>n;
    int i=1;
    do
    {
   cout<<i<<endl;
        i++;
    } while (i<=n);
        
    return 0;
}