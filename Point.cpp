/* Point class implementation (Point.cpp) */
#include "Point.h"
#include <iostream>
#include <cmath>
using std::cout;


Point::Point(int x, int y) : x(x), y(y) { }

int Point::getX() const{
  return x;
}
void Point::setX(int x){
  this->x = x;
}
int Point::getY()  const{
  return y;
}
void Point::setY(int y){
  this->y = y;
}
void Point::setXY(int x, int y){
  this->x = x;
  this->y = y;
}
double Point::getMagnitude() const{ //sqrt(x^2 + y^2)
  return sqrt(pow(x,2)+pow(y,2));
}
double Point::getArgument() const{ //atan(y/x)
  return atan2(y,x) * 180/3.1416;
}
void Point::print() const{
  cout << "(" << x << ", " << y << ")" << "\n";
}
