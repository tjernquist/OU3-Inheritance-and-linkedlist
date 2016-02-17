
#ifndef VERTEX_H
#define	VERTEX_H

#include <iostream>

using namespace std;

class Vertex {
public:
    Vertex() : y(0), x(0) {}
    Vertex(int xPosition, int yPosition) : x(xPosition), y(yPosition) {}
    ~Vertex() {}
    int getXposition() const {return x;}
    int getYposition() const {return y;}
    friend std::ostream& operator<<(std::ostream& out, Vertex& v) {out << "(" << v.x << "," << v.y << ")"; return out;}
    
private:
    int x;
    int y;
    
    
};




#endif	/* VERTEX_H */

