#include "Point.h"
#include <iostream>

using namespace std;

ostream& operator<<(ostream& os, const Point& pt) {
	os << "(" << pt.m_x << ", " << pt.m_y << ")";
	return os;
}

