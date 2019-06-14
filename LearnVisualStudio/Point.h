#pragma once

#include <iostream>

using namespace std;

class Point {
 public:
  Point() = default;
  Point(int x, int y) : m_x(x), m_y(y){};
  int x() { return m_x; }
  int y() { return m_y; }
  friend ostream& operator<<(ostream& os, const Point& pt);

 private:
  int m_x;
  int m_y;
};
