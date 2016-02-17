/* 
 * File:   Node.h
 * Author: Adis
 *
 * Created on den 16 februari 2016, 18:35
 */

#ifndef NODE_H
#define	NODE_H

using namespace std;

#include "Shape.h"

class Node {
public:
    Node(const Shape *v, Node * next): nextNode(next) {shapeInst = v->clone();}
    ~Node() {if (shapeInst != 0) delete shapeInst;}
     Shape * getShape()  {return shapeInst;}
     Node * getNextNode()  {return nextNode;}
     void setNextNode(Node * nod) {nextNode = nod;}

private:
    Shape * shapeInst; //Instance of shape
    Node * nextNode; //Link to the next node
};

#endif	/* NODE_H */

