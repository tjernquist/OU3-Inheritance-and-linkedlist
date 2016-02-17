
#include <cmath>
#include "Point.h"
#include "Polygon.h"

using namespace std;

void Polygon::add(Vertex v) {

    arraySize++;
    Vertex * tempVertexes = new Vertex[arraySize];
    for (int i = 0; i < arraySize; i++) {
        if (i == arraySize - 1) {
            tempVertexes[i] = v;
        } else {
            tempVertexes[i] = vertices[i];
        }
    }
    delete [] vertices;
    vertices = tempVertexes;

}

Polygon::Polygon(double x, double y, Vertex vertices[], int arraySize) : Shape(x, y), vertices(vertices), arraySize(arraySize) {

    arraySize = arraySize;
    vertices = new Vertex[arraySize];

    for (int i = 0; i < arraySize; i++) {
        vertices[i] = vertices[i];
    }

}

double Polygon::area() {

    double area = 0.0f;

    for (int i = 0; i < arraySize - 1; ++i) {
        area += (vertices[i].getXposition() * vertices[i + 1].getYposition()) - (vertices[i + 1].getXposition() * vertices[i].getYposition());
    }

    area += (vertices[0].getYposition() * vertices[arraySize - 1].getXposition()) - (vertices[arraySize - 1].getYposition() * vertices[0].getXposition());

    area = abs(area) *0.5;

    return area;
}

void Polygon::print() {
    cout << "POLYGON:  (" << getX() << "," << getY() << ") {";
    for (int i = 0; i < arraySize; i++) {
        cout << vertices[i] << " ";
    }
    cout << "}" << endl;
}

Polygon* Polygon::clone() const {
    return new Polygon(*this);
}

ostream& operator<<(ostream &output, const Polygon& polygon) { //Kolla denna!

    output << "{";
    for (int i = 0; i < polygon.numVertices(); i++) {
        output << "(" << polygon.vertices[i].getXposition() << "," << polygon.vertices[i].getYposition() << ")";
    }
    output << "}";

    return output;

}