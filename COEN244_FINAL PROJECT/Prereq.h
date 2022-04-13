//COEN244 FINAL PROJECT 
//SILE YANG - 40028543 && MIKHAIL ANGELO PELLAS - 40128268
//THIS PROJECT IS OUR ORIGINAL WORK
//13-04-2022

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


	//func to display the whole graph 
	virtual void display() const;

	//funcs to be implemented
	virtual bool removeVertex(Vertex& v);
	virtual bool removeEdge(Edge& e);
	virtual string toString() const;
	virtual bool clean();
	virtual void display(Vertex& v) const;
	virtual void display(Edge& e) const;





};