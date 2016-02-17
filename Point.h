/* 
 * File:   Point.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 16:33
 */

#ifndef POINT_H
#define	POINT_H

#include <iostream>
#include "Shape.h"

using namespace std;


class Point : public Shape {
public:
    Point( double x, double y, double size);
    void print();
    double area();
    Point* clone() const;

private:
    double size;
};


#endif	/* POINT_H */

