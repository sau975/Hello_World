#include <iostream>
using namespace std;

int TrianglePattern() {
  cout << "\nTriangle Pattern\n";
  for(int i = 0; i <=5; i++) {
    for(int j = 1; j <=5-i; j++) {
      cout << " " << " ";
    }
    for(int k = 0; k <=2*i-1; k++) {
      if(k%2 == 0){
        cout << "*" << " ";
      }else{
        cout << " " << " ";
      }
    }
    cout << endl;
  }
  return 0;
}