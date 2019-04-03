#include <iostream> 
#include <iomanip>

using namespace std;

int main(int argc, char** argv) 
{
    
float num1, num2, num3, num4, num5, ave;
    
    cout << "Input 5 numbers to average.\n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    ave = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << setprecision(1) << fixed << "The average = " << ave;
 
return 0;
    
}