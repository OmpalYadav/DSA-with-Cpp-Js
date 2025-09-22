#include <iostream>
using namespace std;

int main()
{
    int Cost_Price;
    cin >> Cost_Price;

    int Selling_Price;
    cin >> Selling_Price;

    int Profit = Selling_Price - Cost_Price;
    int Loss = Cost_Price - Selling_Price;

    if (Selling_Price>Cost_Price)
    {
        cout << "We Get Profit of " << Profit << " Rupees" << endl;
    }
    else if (Cost_Price>Selling_Price)
    {
        cout << "We Get Loss of " << Loss << " Rupees" << endl;
    }
    else
    {
        cout << "Nothing get" << endl;
    }

    return 0;
}