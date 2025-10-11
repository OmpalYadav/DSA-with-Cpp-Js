// C++ code to demonstrate Profit and Loss
#include <iostream>
using namespace std;

// Function to calculate Profit.
int Profit(int costPrice, int sellingPrice)
{
    int profit = (sellingPrice - costPrice);

    return profit;
}

// Function to calculate Loss.
int Loss(int costPrice, int sellingPrice)
{
    int Loss = (costPrice - sellingPrice);

    return Loss;
}

int main()
{
    int costPrice;
    int sellingPrice;
    cin>>costPrice>>sellingPrice;
    

    if (sellingPrice == costPrice)
        cout << "No profit nor Loss";

    else if (sellingPrice > costPrice)
        cout << Profit(costPrice, sellingPrice) << " Profit ";

    else
        cout << Loss(costPrice, sellingPrice) << " Loss ";

    return 0;
}