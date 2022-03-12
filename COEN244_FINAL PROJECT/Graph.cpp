#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
using namespace std;

//constructor
Graph::Graph() {

}

//constructor to take a parameter
Graph::Graph(int c) {

	edgeArr = new Edge[c];
	vertexArr = new Vertex[c];
	capacity = c; 
	vCounter = 0;
	eCounter = 0;

}

//destructor
Graph::~Graph() {
	delete[]edgeArr;
	delete[]vertexArr;
}




//
////addVertices array func
//bool Graph::addVertices(Vertex *vArray) {
//
//}
//
////addVertex func
//bool Graph::addVertex(Vertex &v) {
//
////&v is referencing to the object we are adding from driver 
//
////true if capacity of the array is greater than size
//	if (capacity > size) { 
//		vertexArr[size] = v;
//
//		size++;
//		return true;
//	}
//
//	else { //if no room in the array
//		return false;
//	}
//}