#include <iostream>
using namespace std;

int NumberPyramid() {
  cout << "\nNumber Pyramid\n";
  for(int i = 1; i < 5; i++) {
    for(int j = 0; j < i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}