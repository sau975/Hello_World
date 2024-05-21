#include <iostream>
#include <cstdlib>
using namespace std;

int HalfDiamondPattern() {
  cout << "\nHalf Diamond Pattern\n";
  int rows = 7;
  int mid = 4;
  int k = 0;
  for(int i = 1; i <=rows; i++) {
    k = abs(mid-i);
    for(int j=1;j<=mid-k;j++){
      cout << "*" << " ";
    }
    // for(int j = 1; j <= i; j++) {
    //   cout << "*" << " ";
    // }
    cout << endl;
  }
  // for(int k = 1; k < 4; k++) {
  //   for(int l = 0; l < 4-k; l++) {
  //     cout << "*" << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}