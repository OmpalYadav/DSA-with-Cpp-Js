#include<iostream>
#include <climits>
using namespace std;

int main(){
    int nums[]={23, 154, 1, 25, 6, 5, -1, -25, 26};
    int size=9;

    int smallest=INT_MAX;
    int largest=INT_MIN;

    for (int i = 0; i < size; i++)
    {
       /* if (nums[i]<smallest)
        {
            smallest=nums[i];
        }
        if (nums[i]>largest)
        {
            largest=nums[i];
        }
       */
        //We can aslo write this in short manner
        smallest=min(nums[i], smallest);
        largest=max(nums[i], largest);

    }
      cout<<smallest<<endl;
      cout<<largest<<endl;
    return 0;
}