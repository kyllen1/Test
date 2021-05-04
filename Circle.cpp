/* The circle class implementation (Circle.cpp) */
#include "Circle.h"

Circle::Circle (double diameter, string color, bool active)
  : diameter(diameter), color(color), active(active) { }

void Circle::setDiameter(double diameter){
  this->diameter = diameter;
}

void Circle::setColor(string color){
  this->color = color;
}

double Circle::getDiameter() const{
  return diameter;
}

double Circle::getPerimeter() const{
  return 3.1416 * diameter;
}

double Circle::getArea() const{
  return 3.1416 * diameter * diameter / 4;
}

string Circle::getColor() const{
  return color;
}

bool Circle::isActive() const{
  return active;
}

void Circle::makeActive(){
  active = true;
}
