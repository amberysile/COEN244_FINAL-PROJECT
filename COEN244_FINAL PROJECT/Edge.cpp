#include <iostream>
#include "Edge.h"
#include "Vertex.h"
using namespace std;


//constructor
Edge::Edge() {
	weight = 0; 
	startVertex = new Vertex();
	endVertex = new Vertex();

}

