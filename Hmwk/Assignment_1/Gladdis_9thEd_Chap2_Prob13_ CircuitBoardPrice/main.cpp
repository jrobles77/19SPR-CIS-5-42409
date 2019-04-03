#include <iostream>
using namespace std;

int main()
{
    double price, profit, cost = 14.95, profit_percentage = .35;
    profit = cost * profit_percentage;
    price = cost + profit;
    int newprice;
            newprice = price * 100;
            price = newprice / 100.0f;
    cout << "The price for a circuit board is $" << price << ".";
    return 0;
}