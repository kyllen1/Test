/* Main file for Time class */
#include "Time.h"
#include <iostream>
using std::cout;

int main(){
  Time t1(23,59,59);
  t1.print();
  t1.nextSecond();
  t1.print();

  // Value increment
  int i = 0;
  cout << ++i << "\n"; //First increment, then print
  cout << i++ << "\n"; //First print, then increment
  cout << i << "\n";

  return 0;
}
