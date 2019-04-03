#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
  int Num;
  string Let;
  cin >> Num >> Let;
  
  for (int Row = 0; Row < Num; Row++){
  for (int Letter = 0; Letter < Num; Letter++){
  cout << Let;
  }
 if (Row < (Num - 1)) cout << endl;
  };
    return 0;
}