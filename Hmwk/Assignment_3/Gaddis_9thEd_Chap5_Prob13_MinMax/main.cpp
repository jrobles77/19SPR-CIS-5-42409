#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int number, min, max;
  cin >> number;
  min = number;
  max = number;
  while (number != -99){
      if (number > max){
      max = number;
      }
      else if (number < min){
          min = number;
      };
      cin >> number;
  };
  cout << "Smallest number in the series is " << min << endl;
  cout << "Largest  number in the series is " << max;
    return 0;
}