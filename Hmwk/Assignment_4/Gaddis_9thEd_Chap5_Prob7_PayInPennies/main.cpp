#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  float Pay, Days;
  cin >> Days;
      while (Days < 1){
      cin >> Days;
      };
      for (int Num = 0; Days > Num; Num++){
      Pay = Pay + (pow(2.0,Num) * .01);
  };
  cout << setprecision(2) << fixed << "Pay = $" << Pay;
    return 0;
}