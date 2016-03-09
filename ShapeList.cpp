#include "ShapeList.h" 
#include "Node.h"
#include "Vertex.h"



//Add a shape to the list
void ShapeList::add(const Shape& s) {
    listStart = new Node(s.clone(), listStart);
}




//Support-function that copies each node from the source-list to the destination-list
void copy(Node* src, Node*& dest)
{
 //The first element is handled separetely
 if (!src) {
   return; //If list is empty, return.
 } else {
   dest = new Node(src->getShape(), src->getNextNode()); //Creates a new first-node.
   src = src->getNextNode();
 }

 
 //Copies the rest of the list
 Node* p = dest; 
 while (src) {
   p->setNextNode(new Node(src->getShape(), src->getNextNode())) ;
   src = src->getNextNode();
   p = p->getNextNode();
 }
}

//Copy-constructor for the ShapeList
ShapeList::ShapeList(const ShapeList &shapes) {
     copy(shapes.listStart, listStart);
}

//Destruction-function for ShapeList
ShapeList::~ShapeList() {
        if (listStart != 0) delete listStart;
}


//Returns the aggregate area of all the shapes in the list
double ShapeList::area() {
    Node* tmp = listStart;
    double areaValue = 0; //Variable to store the area-values.

    if (listStart == NULL)
        cout << "List is empty!" << endl;

    else {
        while (tmp != NULL) {
            areaValue += tmp->getShape()->area(); //Gets the shape from current node and adds its area to the areaValue-variable.
            tmp = tmp->getNextNode(); //Go to the next node
        }
        return areaValue;
    }
}


//Print out all the elements in the list
void ShapeList::print() {
    Node* tmp = listStart;

    if (listStart == NULL)
        cout << "List is empty!" << endl;

    else {
        while (tmp != NULL) { //Iterates trough the list as long as theres nodes available
            tmp->getShape()->print(); //gets the current nodes shape and prints its values.
            tmp = tmp->getNextNode(); //Go to the next node
        }
    }
}


//Remove all Shapes near v (near is here equal to shapes whos x AND y-position differs with less than 1).
void ShapeList::remove(const Vertex& v) {

    Node * prev;
    Node* tmp = listStart; //Starts at the first node in the list
    double x, y; //Variables that holds the distance between the shapes.

    if (listStart == NULL) {
        cout << "List is empty!" << endl;
    } else {
        while (tmp != NULL) { 

            x = tmp->getShape()->getX() - v.getXposition(); //Calculate the x-position between of the shape in the current node and v.
            y = tmp->getShape()->getY() - v.getYposition(); //Calculate the y-position between of the shape in the current node and v.

            if (x < 1 && y < 1) { //If both x and y value is less than 1, the shape is considered "near" v.
                if (tmp == listStart) { //If the shape that is close to v happens to be the first node

                    listStart = tmp->getNextNode(); //The first Node becomes next node;
                    delete tmp; //The node (with its shape and next-node link) is deleted
                    return;
                } else { //If the shape that is close to v is NOT the first node
                    
                    prev->setNextNode(tmp->getNextNode()); //Set the next-node of the previous node to the current nodes next node
                    delete tmp; //Delete the current node.
                    return;
                }
            } else {
                
                prev = tmp; //Previous node becomes the current node
                tmp = tmp->getNextNode(); //Current node becomes the next node
            }
        }
    }
}



