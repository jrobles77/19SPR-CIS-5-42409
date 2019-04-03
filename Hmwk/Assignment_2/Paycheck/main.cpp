#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)

{
    float Check;
    int Pay, Hours, OT;
    cout << "This program calculates the gross paycheck.\n";
    cout << "Input the pay rate in $'s/hr and the number of hours.\n";
    cin >> Pay >> Hours;  

if (Hours < 40)
{
    Check = Pay * Hours;
}

else
{
    OT = (Hours - 40);
    Check = (Pay * 40) + (Pay * OT * 2);
}
    
    cout << "Paycheck = $" << setw(7) << setprecision(2) << fixed << Check;
    
return 0;
    
}