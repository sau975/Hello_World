#include <iostream>
using namespace std;

int InvertedPyramid() {
  cout << "\nInverted Pyramid\n";
  for(int i = 6; i >= 0; i--){
    for(int j = 0; j < i+1; j++){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}