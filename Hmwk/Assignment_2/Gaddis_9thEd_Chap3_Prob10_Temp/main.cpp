#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
    double F, C;
    
    cout << "Temperature Converter\n";
    cout << "Input Degrees Fahrenheit\n";
    cin >> F;
    C =(F-32) * 5 / 9;
    cout << setprecision(1) << fixed << F << " Degrees Fahrenheit = " << C << " Degrees Centigrade";
  
    return 0;
}