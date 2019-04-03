#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int Number, Sum = 0, One = 0;
  cin >> Number;
  while (Number != One){
      Sum = Sum + ++One;
  };
  cout << "Sum = " << Sum;
    return 0;
}