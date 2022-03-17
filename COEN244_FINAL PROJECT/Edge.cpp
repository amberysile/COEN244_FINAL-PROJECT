#include <iostream>
#include "Edge.h"
#include "Vertex.h"
using namespace std;


//constructor
Edge::Edge() {
	weight = 0; 
	//startVertex = new Vertex();
	//endVertex = new Vertex();
	//cout << "The Edge Constructor is called." << endl;
}

Edge::~Edge() {
	//delete startVertex; 
	//delete endVertex;
}

//the parameter is of type Vertex ptr
void Edge::setStartVertex(Vertex *sv) {
	startVertex = sv; 
}

void Edge::setEndVertex(Vertex* ev) {
	endVertex = ev;
}

Vertex* Edge::getStartVertex() {
	return startVertex;
}

Vertex* Edge::getEndVertex() {
	return endVertex;
}