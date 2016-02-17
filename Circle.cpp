#include "Circle.h"
#include "Shape.h"
#include <cmath>

Circle::Circle(double x, double y, double r) : Shape(x, y), radius(r) {
}


//Calculate the area of the circle
double Circle::area() {
    return M_PI * radius * radius;
}

Circle* Circle::clone() const {
    return new Circle(*this);
}

void Circle::print() {
     {
        cout << "CIRCLE: (" << getX() << "," << getY() << ") " << radius << endl;
    }
}