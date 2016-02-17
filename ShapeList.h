/* 
 * File:   ShapeList.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 18:32
 */

#ifndef SHAPELIST_H
#define	SHAPELIST_H

#include "Shape.h"
#include "Node.h"
#include "Vertex.h"

using namespace std;


//Custom made Linked List
class ShapeList {
public:

    ShapeList() : listStart(0) {}
    ShapeList(const ShapeList &shapes);
    ~ShapeList();
    void add(const Shape& s);
    void remove(const Vertex& v);
    double area();
    void print();

private:
    Node * listStart;
};

#endif	/* SHAPELIST_H */

