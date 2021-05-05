/* Time class definition header (Time.h) */
#ifndef TIME_H  // Include this header only if TIME_H is not defined
#define TIME_H  // Upon the first inclusion, define TIME_H so that this header
                // will not get included more than once

class Time{
private:
  int hour;
  int minute;
  int second;
public:
  Time(int h = 0, int m = 0, int s = 0);

  int getHour() const;
  int getMinute() const;
  int getSecond() const;
  void setHour(int h);
  void setMinute(int m);
  void setSecond(int s);
  void setTime(int h, int m, int s);
  void print() const;
  void nextSecond();
};

#endif  // End of #ifndef block
