#include <iostream>
#include <string>
#include "Circle.h"
using std::cout;
using std::string;

//const double pi = 3.14159;

/*class Circle {
private:
  double diameter;
  string color;
  bool active;

public:
  Circle (double diameter = 1, string color = "White", bool active = false)
    : diameter(diameter), color(color), active(active) { }

  void setDiameter(double diameter){
    this->diameter = diameter;
  }
  void setColor(string color){
    this->color = color;
  }
  double getDiameter() const{
    return diameter;
  }
  double getPerimeter() const{
    return pi * diameter;
  }
  double getArea() const{
    return pi * diameter * diameter / 4;
  }
  string getColor() const{
    return color;
  }
  bool isActive() const{
    return active;
  }
  void makeActive(){
    active = true;
  }
};*/

int main() {
  Circle c1;
  c1.setDiameter(15);
  c1.setColor("Red");
  c1.makeActive();
  cout << c1.getArea() << "\n";
  cout << c1.getColor() << "\n";
  cout << "Is active? " << c1.isActive() << "\n";
  Circle c2(c1);
  cout << c2.getArea() << "\n";
  cout << c2.getColor() << "\n";
  cout << "Is active? " << c2.isActive() << "\n";

  return 0;
}
