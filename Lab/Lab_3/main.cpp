#include <iostream> 
#include <iomanip>
using namespace std; 

int main() 

{
    double Profit, Gov, GasCost, ProfPer, GovPer, PerDiff, MonDiff,
    Exctax = .39, Saltax = .08, Feetax = .10, Fedtax = .184, OilPro = .065; 
    cout << "How much per gallon did it cost to fill your car with gas? "; 
    cin >> GasCost; 
    
    Profit = GasCost * OilPro ;                                                 // Calculate Oil Company Profit
    Gov = (Exctax + Feetax + Fedtax) + (GasCost * Saltax);                      // Calculate Government Taxes
    ProfPer = OilPro * 100;                                                     // Calculate Percentage Oil Company kept
    GovPer = (Gov / GasCost) * 100;                                             // Calculate Percentage Government kept
    PerDiff = GovPer - ProfPer;                                                 // Calculate percentage difference 
    MonDiff = Gov - Profit;                                                     // Calculate money difference 
    
    cout << "In your purchase of gas:" << endl;
    cout << "The Oil Company kept " << setw(5) << setprecision(2) << fixed << ProfPer << "% of the Money in profit.  Keeping: $" << Profit << endl;
    cout << "The Government took  " << setw(5) << setprecision(2) << fixed << GovPer  << "% of the Money in taxes.   Keeping: $" << Gov << endl;
    cout << "The Governmant kept  " << setw(5) << setprecision(2) << fixed << PerDiff << "% more of the total Money. Keeping: $" << MonDiff << " more than the oil company.";
    return 0; 
} 