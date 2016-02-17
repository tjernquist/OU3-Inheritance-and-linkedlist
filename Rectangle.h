/* 
 * File:   Rectangle.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 16:57
 */

#ifndef RECTANGLE_H
#define	RECTANGLE_H

#include <iostream>
#include "Shape.h"

using namespace std;

class Rectangle : public Shape {
public:
    Rectangle ( double x, double y, double width, double height);
    void print();
    double area();
    Rectangle* clone() const;


private:
    double width;
    double height;
    
};






#endif	/* RECTANGLE_H */

