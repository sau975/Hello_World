#include <iostream>
using namespace std;

int AlphabetPyramid() {
  cout << "\nAlphabet Pyramid\n";
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j <= i; j++) {
      int asc = 65+i;
      cout << (char)asc << " ";
    }
    cout << endl;
  }
  return 0;
}