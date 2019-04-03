#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int weight, Pop;
   cout << "Program to calculate the limit of Soda Pop Consumption.\n";
   cout << "Input the desired dieters weight in lbs.\n";
   cin >> weight;
   Pop = (weight * 453.592) / (350 * 0.001f) / 7;
   cout << "The maximum number of soda pop cans\n";
   cout << "which can be consumed is " << Pop << " cans";
 
    return 0;
}