#pragma once
#include <iostream>
#include "Vertex.h"
using namespace std;


class Edge {

	friend class Graph; //class Graph has access to all members (attributes & funcs) of class Edge

private: 
	int weight; 

	//Each edge has a startVertex and endVertex: Edge is a composite classs of Vertex
	Vertex *startVertex, *endVertex;

public: 

	//constructor
	Edge();

	//destructor 
	~Edge();

	//accessing func if needed
	void setStartVertex(Vertex*);
	void setEndVertex(Vertex* ev);
	Vertex* getStartVertex();
	Vertex* getEndVertex();

};