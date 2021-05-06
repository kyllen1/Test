/* Point class header declaration (Point.h) */

class Point{
private:
  int x, y;
public:
  Point(int x = 0, int y = 0);

  int getX() const;
  void setX(int x);
  int getY() const;
  void setY(int y);
  void setXY(int x, int y);
  double getMagnitude() const;
  double getArgument() const;
  void print() const;
};
