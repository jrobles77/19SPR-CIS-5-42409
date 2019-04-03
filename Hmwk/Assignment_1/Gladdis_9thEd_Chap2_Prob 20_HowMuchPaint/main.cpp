#include <iostream>
using namespace std;

int main()
{
    double paint_needed, coverage = 340, height = 6, width = 100, coats = 2, area;
    area = height * width;
    area = area * coats;
    paint_needed = area / coverage;
    cout << paint_needed << " gallons of paint are going to be needed.";
}