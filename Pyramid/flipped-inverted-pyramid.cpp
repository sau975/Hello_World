#include <iostream>
using namespace std;

int FlippedInvertedPyramid() {
  cout << "\nFlipped Inverted Pyramid\n";
  for(int i = 1; i <= 6; i++) {
    for(int j = 1; j < i; j++) {
      cout << " " << " ";
    }
    for(int k = 0; k <= 6-i; k++) {
      cout << "*" << " ";
    }
    cout << endl;
  }
  return 0;
}