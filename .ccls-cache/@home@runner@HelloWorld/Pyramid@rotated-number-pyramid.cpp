#include <iostream>
using namespace std;

int RotatedNumberPyramid() {
  cout << "\nRotated Number Pyramid\n";
  for(int i = 1; i < 5; i++) {
    for(int j = 1; j < 5-i; j++) {
      cout << " " << " ";
    }
    for(int k = 0; k < i; k++) {
      cout << k+i << " ";
    }
    cout << endl;
  }
  return 0;
}