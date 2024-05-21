#include <iostream>
using namespace std;

int SimplePyramid() {
  cout << "\nSimple Pyramid\n";
  for(int i = 0; i < 6; i++){
    for(int j = 0; j < i+1; j++){
      cout << "*" << " ";
    }
    cout << endl;
  }
  return 0;
}