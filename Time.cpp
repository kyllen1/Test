/* Time class implementation (Time.cpp) */
#include "Time.h"
#include <iostream>
#include <iomanip>
using std::cout;
using std::setfill;
using std::setw;

Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) { }

int Time::getHour() const {
  return hour;
}
int Time::getMinute() const {
  return minute;
}
int Time::getSecond() const {
  return second;
}
void Time::setHour(int h){
  this->hour = h;
}
void Time::setMinute(int m){
  this->minute = m;
}
void Time::setSecond(int s){
  this->second = s;
}
void Time::setTime(int h, int m, int s){
  this->hour = h;
  this->minute = m;
  this->second = s;
}
void Time::print() const {
  cout << setfill('0');
  cout << setw(2) << hour << ":"
       << setw(2) << minute << ":"
       << setw(2) << second << "\n"; //Format hh:mm:ss
}
void Time::nextSecond(){
  if(++second == 60){ //Firt increment, then evaluate if
    second = 0;
    if(++minute == 60){
      minute = 0;
      if(++hour == 24)
        hour = 0;
    }
  }
}
