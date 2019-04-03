#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int Num, Num1, Num2;
    cin >> Num;
  for (Num1 = 1; Num >= Num1; ++Num1) { 
      for (Num2 = Num1; Num2 > 0 ;Num2--){
           cout << "+";
      }
  cout << endl << endl;
  };
  for (; Num1 >= 1; --Num1) { 
      for (Num2 = Num1; Num2 > 1 ;Num2--){
           cout << "+";
      }
  if (Num2 < (Num1 - 1)) cout << endl << endl;
  };
    return 0;
}