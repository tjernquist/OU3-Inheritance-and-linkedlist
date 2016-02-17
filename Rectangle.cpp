
#include "Point.h"
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x, y), width(width), height(height) {

}


double Rectangle::area() {
    return width*height;
}

void Rectangle::print() {
    { cout << "RECTANGLE:  (" << getX() << "," << getY() << ") (" << width << "," << height << ")" <<  endl;}
}

Rectangle* Rectangle::clone() const {
    return new Rectangle(*this);
}