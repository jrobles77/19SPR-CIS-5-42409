#include <iostream>
using namespace std;

int main()
{
    double Distance, tank =20, MPG_highway = 28.9, MPG_town = 23.5;
    Distance = tank * MPG_town;
    cout << "In town the car can travel "<< Distance << " miles.\n";
    Distance = tank * MPG_highway;
    cout << "On the highway the car can travel "<< Distance << " miles.";
    return 0;
}