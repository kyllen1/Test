/* Test file for Point class */

#include "Point.h"
#include <iostream>
using std::cout;

int main(){
  Point p1;
  p1.setX(5);
  p1.setY(7);
  p1.print();
  Point p2;
  p2.setXY(1,1);
  p2.print();
  cout << p2.getMagnitude() << " < " << p2.getArgument() << "\n";

  return 0;
}
