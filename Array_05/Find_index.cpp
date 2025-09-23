#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {23, 154, 1, 25, 6, 5, -1, -25, 26};
    int size = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX, largest = INT_MIN;
    int smallestIndex = 0, largestIndex = 0;

    for (int i = 0; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallestIndex = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largestIndex = i;
        }
    }

    cout << "Smallest: " << smallest << " at index " << smallestIndex << endl;
    cout << "Largest: " << largest << " at index " << largestIndex << endl;

    return 0;
}
