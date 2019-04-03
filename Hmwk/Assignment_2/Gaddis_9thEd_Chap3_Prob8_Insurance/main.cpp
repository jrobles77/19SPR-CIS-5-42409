#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
   float Worth, Insure;
   
   cout << "Insurance Calculator\nHow much is your house worth?\n";
   cin >> Worth;
   Insure = Worth * .8;
   cout << "You need $" << Insure << " of insurance.";
   
    return 0;
}