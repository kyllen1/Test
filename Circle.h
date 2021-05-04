/* The circle class header (Circle.h) */
#include <string>
using std::string;

class Circle {
private:
  double diameter;
  string color;
  bool active;

public:
  Circle (double diameter = 1, string color = "White", bool active = false);

  void setDiameter(double diameter);
  void setColor(string color);
  double getDiameter() const;
  double getPerimeter() const;
  double getArea() const;
  string getColor() const;
  bool isActive() const;
  void makeActive();
};
