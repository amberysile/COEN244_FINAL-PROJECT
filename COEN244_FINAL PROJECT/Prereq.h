#pragma once
#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
using namespace std;

//Non-weighted DAG that reprsents course dependency/pre-reqs

//Prereq is a derived class of Graph class 
class Prereq:public Graph {


private: 


public: 

	Prereq();
	~Prereq();
	//virtual bool addVertex(Vertex& v);
	//virtual bool addVertices(Vertex* vArray);

	//extra func
	virtual bool addVertex(string courseName);
	int searchVertexIndex(string s); 
	virtual bool searchVertex(string s);
	virtual bool addEdge(string sv, string ev);
	virtual bool searchEdge(string sv, string ev);

	//access funcs
	Vertex* getVertexArr();
	Edge* getEdgeArr();
	int geteCounter();
	int getvCounter();

	//funcs to be implemented
	virtual bool removeVertex(Vertex& v);
	virtual bool removeEdge(Edge& e);
	virtual void display() const;
	virtual string toString() const;
	virtual bool clean();
	virtual void display(Vertex& v) const;
	virtual void display(Edge& e) const;

	//operator overloading:

	//G1 == G2 returns true if G1 and G2 have the exact same vertices and edges
	bool operator==(Prereq&);

};