#include "Point.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const Point& pt) {
	os << "(" << pt.x << ", " << pt.y << ")";
	return os;
}

