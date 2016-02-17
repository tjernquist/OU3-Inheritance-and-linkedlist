/* 
 * File:   Shape.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 13:58
 */

#ifndef SHAPE_H
#define	SHAPE_H

#include <iostream>

using namespace std;


//Parent-element Shape which the rest of the shapes (Polygon, Circle, Rectangle, Point) is derived from
class Shape {
public:
    Shape(double x, double y) : xPosition(x), yPosition(y){}
    Shape() : xPosition(0), yPosition(0) {}
    virtual ~Shape() {}
    double getX() {return xPosition;}
    double getY() {return yPosition;}
    virtual double area() = 0;
    virtual void print() = 0;
    virtual Shape* clone() const = 0; 

protected:
    double xPosition, yPosition;
};





#endif	/* SHAPE_H */


