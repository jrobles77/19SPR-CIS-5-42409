#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int Num = 0;
  double Pay, Days;
  cin >> Days;
      while (Days < 1){
      cin >> Days;
      };
  while (Days > Num){
      Pay = Pay + (pow(2.0,Num++) * .01);
  };
  cout << setprecision(2) << fixed << "Pay = $" << Pay;
    return 0;
}
