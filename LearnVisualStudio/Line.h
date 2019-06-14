#pragma once

#include "Point.h"

class Line {
 public:
  Line(Point p1, Point p2) : p1(p1.x(), p1.y()), p2(p2.x(), p2.y()) {}
  double length();

 private:
  Point p1;
  Point p2;
};
