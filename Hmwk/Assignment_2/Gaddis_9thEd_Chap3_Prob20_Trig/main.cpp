#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main(int argc, char** argv) 
{
    
float x, y, z,PI = 3.14159;

cout << "Calculate trig functions\n";
cout << "Input the angle in degrees.\n";
cin >> x;

z = x * PI / 180 ;
y = sin(z);
cout << noshowpoint << setprecision(4) << "sin(" << x << ") = " << showpoint << setprecision(4) << y << endl;
y = cos(z);
cout << noshowpoint << setprecision(4) << "cos(" << x << ") = " << showpoint << setprecision(4) << y << endl;;
y = tan(z);
cout << noshowpoint << setprecision(4) << "tan(" << x << ") = " << showpoint << setprecision(4) << fixed << y;

    return 0;
}