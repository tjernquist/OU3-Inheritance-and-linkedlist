/* 
 * File:   Circle.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 16:27
 */

#ifndef CIRCLE_H
#define	CIRCLE_H

#include <iostream>
#include "Shape.h"

using namespace std;

class Circle : public Shape {
public:
    Circle(double x, double y, double r);
    void print();
    Circle* clone() const;
    double area();

private:
    double radius;
};


#endif	/* CIRCLE_H */

