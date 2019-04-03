#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
   float Pay, RP, NAS, AMS, Raise = .076;
   cout << "Input previous annual salary.\n";
   cin >> Pay;
   RP = (Pay / 2 * Raise);
   NAS = Pay + Pay * Raise;
   AMS = NAS / 12;
   cout << "Retroactive pay    = $" << setw(7) << setprecision(2) << fixed << RP << endl;
   cout << "New annual salary  = $" << setw(7) << setprecision(2) << fixed << NAS << endl;
   cout << "New monthly salary = $" << setw(7) << setprecision(2) << fixed << AMS;
   
   
    return 0;
}