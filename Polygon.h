/* 
 * File:   Polygon.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 17:08
 */

#ifndef POLYGON_H
#define	POLYGON_H

#include <iostream>
#include "Shape.h"
#include "Vertex.h"

using namespace std;

class Polygon : public Shape {
public:
    Polygon(double x, double y, Vertex vertices[], int arraySize);
    Polygon();
    ~Polygon() {delete[] vertices;}
    void add(Vertex v);
    double area() ;
    void print();
    int numVertices() const {return arraySize;}
    Polygon* clone() const;
    friend ostream &operator << (ostream &output, const Polygon& polygon);
  
private:
    int arraySize;
    Vertex * vertices;
    
};

#endif	/* POLYGON_H */

