//COEN244 FINAL PROJECT 
//SILE YANG - 40028543 && MIKHAIL ANGELO PELLAS - 40128268
//THIS PROJECT IS OUR ORIGINAL WORK
//13-04-2022

#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
using namespace std;


//constructor
Graph::Graph() {

}



/////////////////EXCEPTION HANDLING//////////////
//constructor to take a parameter
Graph::Graph(int c) {
	try {
			if (c < 0) throw string("Graph cannot be negative.");
		
		edgeArr = new Edge[c];
		vertexArr = new Vertex[c];
		capacity = c;
		vCounter = 0;
		eCounter = 0;
	}
	catch (string str) {
		cout << "Exception: " << str << endl;
		exit(1);
	}

}



//destructor
Graph::~Graph() {
	delete[]edgeArr;
	delete[]vertexArr;
}




////////////////////funcs for operator overloading////////////////////////////////////


//access funcs
//func to get the VertexArr
//return type is a pointer because we are returning an array
Vertex* Graph::getVertexArr() {
	return vertexArr;
}

Edge* Graph::getEdgeArr() {
	return edgeArr;
}

int Graph::geteCounter() {
	return eCounter;
}

int Graph::getvCounter() {
	return vCounter;
}



//G1 == G2 returns true if G1 and G2 have the exact same vertices and edges
bool Graph::operator==(Graph& G2) {

	//do if comparison for vCounter and eCounter before entering for loop
	if (vCounter != G2.geteCounter()) {
		return false;
	}

	if (vCounter != G2.geteCounter()) {
		return false;
	}

	for (int i = 0; i < vCounter; i++) {
		if (vertexArr[i].getVertexName() != (G2.getVertexArr())[i].getVertexName()) //compare the string of G1 which calls this func to the string of G2, loop with size of G1
			return false;
	}

	for (int j = 0; j < eCounter; j++)
	{
		if (edgeArr[j].getStartVertex()->getVertexName() != (G2.getEdgeArr())[j].getStartVertex()->getVertexName())
			return false;

		if (edgeArr[j].getEndVertex()->getVertexName() != (G2.getEdgeArr())[j].getEndVertex()->getVertexName())
			return false;
	}


	return true;

}


//G1 = G2, assign Graph G2 to Graph G1
const Graph& Graph::operator=(const Graph& G2) {


	vCounter = G2.vCounter;
	eCounter = G2.eCounter;

	for (int i = 0; i < vCounter; i++) {
		vertexArr[i] = G2.vertexArr[i];
	}

	for (int j = 0; j < eCounter; j++)
	{
		edgeArr[j] = G2.edgeArr[j];
	}


	return *this; //return the object that calls this func, which is G1
}


//++G
// overloaded prefix increment operator                 
Graph& Graph::operator++() {

	for (int j = 0; j < eCounter; j++)
	{
		++(edgeArr[j].weight); //increment the weight of the edge at index j in the array
	}   

	return *this; 
}

//G++
// overloaded postfix increment operator; note that the 
// dummy integer parameter does not have a parameter name

Graph& Graph::operator++(int) {

	for (int j = 0; j < eCounter; j++)
	{
		(edgeArr[j].weight)++; //increment the weight of the edge at index j in the array
	}

	return *this;
}

//G3 = G1 + G2
//Illegal operation since Graph is an abstract class
//Graph& Graph::operator+(Graph &G2) {
//
//	Graph G3;
//
//	return G3;
//}


//G1>G2
bool Graph::operator>(Graph& G2) {

	//initialize the weight of G1 & G2 to be 0, then compare
	int weightG1 = 0, weightG2 = 0; 

	for (int j = 0; j < eCounter; j++)
	{
		weightG1 += edgeArr[j].weight;
	}

	for (int j = 0; j < G2.eCounter; j++)
	{
		weightG2 += G2.edgeArr[j].weight;
	}

	return (weightG1>weightG2);
}


// <<G
// overloaded stream insertion operator; cannot be a member function

//no need to put scope Graph:: because this is a friend func 
ostream& operator<<(ostream& output, const Graph& G) {

	output << "Vertices are: " << endl;

	for (int i = 0; i < G.vCounter; i++) {
		
		output << G.vertexArr[i].getVertexName() << endl;

	}
	cout << "\n" << endl;

	output << "Edges are: " << endl;
	for (int j = 0; j < G.eCounter; j++)
	{
		output << G.edgeArr[j].getStartVertex()->getVertexName() << "->" << G.edgeArr[j].getEndVertex()->getVertexName() << endl;

	}


	return output;               
}


//////////////////////#6 REQUIREMENT////////////////////
void Graph::vertexPath(string s) {
	cout << "From Vertex " << s << ", the path is:" << endl;
	for (int j = 0; j < eCounter; j++)
	{
		if (edgeArr[j].getStartVertex()->getVertexName() == s) {
			cout << edgeArr[j].getEndVertex()->getVertexName() <<"\n" << endl;
		}
	}

}
















