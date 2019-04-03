#include <iostream>
using namespace std;

int main()

{
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95, tax = .07, total, sub, salestax;
    cout << "Price of item 1 = $" << item1 << "\n";
    cout << "Price of item 2 = $" << item2 << "\n";
    cout << "Price of item 3 = $" << item3 << "\n";
    cout << "Price of item 4 = $" << item4 << "\n";
    cout << "Price of item 5 = $" << item5 << "\n";
    sub = item1 + item2 + item3 + item4 + item5;
    cout << "Subtotal = $"<< sub << "\n";
    salestax = sub * tax;
    cout << "Sales Tax = $"<< salestax << "\n";
    total = sub + salestax;
    int newtotal;
            newtotal = total * 100;
            total = newtotal / 100.0f;
    cout << "Total = $"<< total;
    return 0;
}