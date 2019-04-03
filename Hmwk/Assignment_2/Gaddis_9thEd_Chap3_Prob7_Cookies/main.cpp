#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    
    float num, cal, ser;
  
    cout << "Calorie Counter\n";
    cout << "How many cookies did you eat?\n";
    cin >> num;
    ser = num / 4;
    cal = ser * 300;
    cout << "You consumed " << cal << " calories.";
  
    return 0;
}