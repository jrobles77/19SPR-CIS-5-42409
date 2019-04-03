#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
float milBdgt, fedBdgt, mlPrcnt;

milBdgt = 7.0e11f; 
fedBdgt = 4.1e12f;
mlPrcnt = (milBdgt / fedBdgt) * 100;
cout << mlPrcnt << "%";
    return 0;
}