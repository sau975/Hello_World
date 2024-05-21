#include <iostream>
using namespace std;

int ContinuousNumberPyramid() {
  cout << "\nContinuous Number Pyramid\n";
  int num = 1;
  for(int i = 1; i < 5; i++) {
    for(int j = 0; j < i; j++) {
      cout << num << " ";
      num = num + 1;
    }
    cout << endl;
  }
  return 0;
}