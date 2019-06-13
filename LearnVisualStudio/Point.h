#pragma once

#include <iostream>

using namespace std;

class Point {
 public:
  Point() = default;
  Point(int x, int y) : x(x), y(y){};
  friend ostream& operator<<(ostream& os, const Point& pt);

 private:
  int x;
  int y;
};
