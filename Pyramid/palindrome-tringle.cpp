#include <iostream>
using namespace std;

int PalindromeTringle() {
  cout << "\nPalindrome Tringle\n";
  for (int i = 0; i < 5; i++) {
    for (int j = 1; j < 5 - i; j++) {
      cout << " " << " ";
    }
    for (int k = 0; k < i; k++) {
      cout << k + i << " ";
    }
    for (int l = 2; l <= i; l++) {
      cout << 2 * i - l << " ";
    }
    cout << endl;
  }
  return 0;
}