#include <iostream>
using namespace std;

int main()
{
    double level, rate = 1.5, year5 = 5, year7 = 7, year10 = 10;
    level = rate * year5;
    cout << "In 5 years the ocean would rise " << level << " millimeters.\n";
    level = rate * year7;
    cout << "In 7 years the ocean would rise " << level << " millimeters.\n";
    level = rate * year10;
    cout << "In 10 years the ocean would rise " << level << " millimeters.";
}