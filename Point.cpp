#include <math.h>

#include "Point.h"

using namespace std;

Point::Point(double x, double y, double size) : Shape(x, y), size(size){}


void Point::print() {
    { cout << "POINT:  (" << getX() << "," << getY() << ") " << size << endl;}
}
double Point::area() {
    return size;
}

Point* Point::clone() const {
    return new Point(*this);
}
