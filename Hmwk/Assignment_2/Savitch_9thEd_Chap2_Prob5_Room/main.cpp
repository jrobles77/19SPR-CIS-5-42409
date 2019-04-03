#include <iostream>  //Input/Output Library
using namespace std;

int main(int argc, char** argv) 
{
    int Cap, Pop, Num;
    cout << "Input the maximum room capacity and the number of people\n";
    cin >> Cap >> Pop;
  
  if (Pop > Cap)
  {
      cout << "Meeting cannot be held.\n";
      Num = Pop - Cap;
      cout << "Reduce number of people by " << Num << " to avoid fire violation.";
  }
  else
  {
    cout << "Meeting can be held.\n";
    Num = Cap - Pop;
    cout << "Increase number of people by " << Num << " will be allowed without violation.";  
  }
    return 0;
}