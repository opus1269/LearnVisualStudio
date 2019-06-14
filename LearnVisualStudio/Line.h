#pragma once

#include "Point.h"

class Line {
 public:
  Line(Point p1, Point p2) : p1(p1), p2(p2) {}
  double length();

 private:
  Point p1;
  Point p2;
};
