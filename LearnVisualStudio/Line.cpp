#include <cmath>
#include "Line.h"

double Line::length() {
  double dxsq = pow(p2.x() - p1.x(), 2);
  double dysq = pow(p2.y() - p1.y(), 2);
  return sqrt(dxsq + dysq);
}
