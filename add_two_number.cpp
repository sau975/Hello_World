#include <iostream>
using namespace std;

int addTwoNumber() {
  int first_number, second_number, sum;
  cout << "Enter two integers: ";
  cin >> first_number >> second_number;

  sum = first_number + second_number;

  cout << first_number << " + " <<  second_number << " = " << 
  sum;     

  return 0;
}