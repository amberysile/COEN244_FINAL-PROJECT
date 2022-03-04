#pragma once
#include <iostream>
#include "Vertex.h"
using namespace std;


class Edge {

private: 
	int weight; 

	//Each edge has a startVertex and endVertex: Edge is a composite classs of Vertex
	Vertex *startVertex, *endVertex;

public: 

	//constructor
	Edge();


	//accessing func if needed


};