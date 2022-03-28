//COEN244 FINAL PROJECT

#pragma once
#include <iostream>
#include "Vertex.h"
#include "Edge.h"
using namespace std;


class Graph {


protected: 
	//G=(N,E)
	Edge *edgeArr;
	Vertex *vertexArr;
	int vCounter, eCounter, capacity;


public:
	//constructor
	Graph();

	//constructor to take a parameter
	Graph(int c);

	//virtual destructor 
	virtual ~Graph();

	virtual bool addVertex(string courseName) = 0;


	//add in one vertex; bool returns if it is added successfully.
	//virtual bool addVertex(Vertex& v) = 0;

	//addVertices array, each time addVertex is called, the new vertex is added to this array. the passing parameter is an array
	//virtual bool addVertices(Vertex* vArray) = 0;

	//the edges that has connection with this vertex need to be removed
	virtual bool removeVertex(Vertex& v) = 0;

	//add an edge 
	virtual bool addEdge(string sv, string ev) = 0;

	//remove an edge; as a result, some node may remain as orphan (modified form original code)
	virtual bool removeEdge(Edge& e) = 0;

	// return true if a vertex exists in a graph
	virtual bool searchVertex(string s) = 0;
	
	// return true if an Edge exists in a graph
	virtual bool searchEdge(string sv, string ev) = 0;

	// display the whole graph with your own defined format
	virtual void display() const = 0;

	
	// convert the whole graph to a string such as 1‐2‐4‐5; 1‐3‐5; each path is separated by ';'
	// or just print the edges of the graph as a list
	// define your own format of a string representation of the graph.
	virtual string toString() const = 0;


	//remove all the vertices and edges;
	virtual bool clean() = 0;

	//print func 
	// you may consider the following in your project:
	// add/remove a set of edge; as a result, some node may remain as orphan.
	//virtual bool addEdges(Edge* eArray) = 0;
	//virtual bool removeEdges(Edge* eArray) = 0;
	// display the path that contains the vertex;
	virtual void display(Vertex& v) const = 0;

	// display the path that contains the edge;
	virtual void display(Edge& e) const = 0;


	//access funcs
	Vertex* getVertexArr();
	Edge* getEdgeArr();
	int geteCounter();
	int getvCounter();

	//operator overloading:

	//G1 == G2 returns true if G1 and G2 have the exact same vertices and edges
	bool operator==(Graph&);


	//G1 = G2
	const Graph& operator=(const Graph&);

	//++G
	Graph& operator++();

	//G++
	Graph& operator++(int);

	//G3 = G1 + G2
	//Graph& operator+(Graph&);

	//G1>G2
	bool operator>(Graph& G2);


	//////////////////#5 REQUIREMENT/////////////////
	// <<G
	friend ostream& operator<<(ostream& output, const Graph& G);


	//////////////////#6 REQUIREMENT/////////////////
	void vertexPath(string n);




};

