#include <iostream>
using namespace std;

int ContinuousAlphabetPyramid() {
  cout << "\nContinuous Alphabet Pyramid\n";
  int asc = 65;
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j <= i; j++) {
      cout << (char)asc << " ";
      asc = asc + 1;
    }
    cout << endl;
  }
  return 0;
}