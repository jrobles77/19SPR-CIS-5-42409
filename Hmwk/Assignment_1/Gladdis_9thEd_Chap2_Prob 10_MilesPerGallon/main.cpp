#include <iostream>
using namespace std;

int main()
{
    int Gallons_of_Gas_Used = 15, Miles_Driven = 375, MPG;
    MPG = Miles_Driven / Gallons_of_Gas_Used;
    cout << "The car runs at "<< MPG << " MPG.";
    return 0;
}