/* Ball class definition (Ball.cpp) */

#include "Ball.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::fixed;
using std::setprecision;

Ball::Ball(double x, double y, double xSpeed, double ySpeed) :
  x(x), y(y), xSpeed(xSpeed), ySpeed(ySpeed) { }

double Ball::getX() const{
    return x;
}
void Ball::setX(double x){
    this->x =  x;
}
double Ball::getY() const{
    return y;
}
void Ball::setY(double y){
    this->y = y;
}
double Ball::getXSpeed() const{
    return xSpeed;
}
void Ball::setXSpeed(double xSpeed){
    this->xSpeed = xSpeed;
}
double Ball::getYSpeed() const{
    return ySpeed;
}
void Ball::setYSpeed(double ySpeed){
    this->ySpeed = ySpeed;
}
void Ball::setXY(double x, double y){
    this->x = x;
    this->y = y;
}
void Ball::setXYSpeed(double xSpeed, double ySpeed){
    this->xSpeed = xSpeed;
    this->ySpeed = ySpeed;
}
void Ball::move(){
    x += xSpeed;
    y += ySpeed;
}
void Ball::print() const{
    cout << fixed << setprecision(2);
    cout << "Ball @ (" << x << "," << y <<") with speed (" << xSpeed << "," << ySpeed << ")\n";
}
