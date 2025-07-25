#include<iostream>
using namespace std;

int main(){
    int n, i, last, prev, curr;
cout << "Enter the number: ";
cin >> n;

if(n < 0) {
    cout << "Enter valid number";
    return 0;
} else {
    last = 0;
    prev = 1;
    curr = 1;
}

for(i = 2; i <=n; i++) {
    curr = last + prev;
    last = prev;
    prev = curr;
}

cout << curr;

    return 0;
}