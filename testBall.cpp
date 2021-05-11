/* Ball class test file (testBall.cpp) */

#include "Ball.h"

int main(){
  Ball b1;
  b1.setXY(5,5);
  b1.setXYSpeed(3,2);
  b1.print();
  b1.move();
  b1.print();
  
  return 0;
}
