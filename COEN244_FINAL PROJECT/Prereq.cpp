//COEN244 FINAL PROJECT

#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
#include "Prereq.h"
using namespace std;

//initialize the size of capacity of the graph to be 200
Prereq::Prereq():Graph(200) {

}


/////////////////EXCEPTION HANDLING//////////////
//initialize the size of capacity of the graph to be -200
//Prereq::Prereq() :Graph(-200) {
//
//}


Prereq::~Prereq() {

}

//func to add a vertex, in our case, a vertex is a course 
bool Prereq::addVertex(string courseName) {
	//true if capacity of the array is greater than size
	if (capacity > vCounter) {
		vertexArr[vCounter].setVertexName(courseName);
		vCounter++;
		return true;
	}

	else { //if no room in the array
		return false;
	}

}


//bool Prereq::addVertex(Vertex& v) {
//	return true;
//}
//
//bool Prereq::addVertices(Vertex* vArray) {
//	return true;
//}

bool Prereq::removeVertex(Vertex& v) {
	return true;
}



bool Prereq::addEdge(string sv, string ev) {
	//true if capacity of the array is greater than size
	if (capacity > eCounter) {
		edgeArr[eCounter].setStartVertex(&vertexArr[searchVertexIndex(sv)]);
		edgeArr[eCounter].setEndVertex(&vertexArr[searchVertexIndex(ev)]);
		//next 2 lines do the same:
		//edgeArr[eCounter].setStartVertex(vertexArr + searchVertexIndex(sv));
		//edgeArr[eCounter].setEndVertex(vertexArr + searchVertexIndex(ev));
		eCounter++;
		return true;
	}

	else { //if no room in the array
		return false;
	}
}

bool Prereq::removeEdge(Edge& e) {
	return true;
}


/////////////////#8 REQUIREMENT///////////////////
//this func searches a vertex
bool Prereq::searchVertex(string s) {
	for (int i = 0; i < vCounter; i++) {
		if (vertexArr[i].getVertexName() == s)
			return true;
	}
	return false;
}
//this func returns the index of the vertex according to courseName, or -1 if it doesnt exsit

int Prereq::searchVertexIndex(string s) {
	for (int i = 0; i < vCounter; i++) {
		if (vertexArr[i].getVertexName() == s)
			return i; //search for the index where a course s (a vertex) is located in the array
	}
	return -1;
}


/////////////////#7 REQUIREMENT/////////////////////
bool Prereq::searchEdge(string sv, string ev) {
	for (int i = 0; i < eCounter; i++)
	{
		if (edgeArr[i].getStartVertex()->getVertexName() == sv && edgeArr[i].getEndVertex()->getVertexName() == ev)
			return true;
	}
	return false;
}


string Prereq::toString() const {
	return " ";
}

bool Prereq::clean() {
	return true;
}

void Prereq::display(Vertex& v) const{

}

void Prereq::display(Edge& e) const {

}


//func to display the whole graph 
void Prereq::display() const {

	for (int i = 0; i < vCounter; i++) {
		cout << vertexArr[i].getVertexName() << endl;
			
	}

	for (int j = 0; j < eCounter; j++) {
		cout << edgeArr[j].getStartVertex()->getVertexName() << edgeArr[j].getEndVertex()->getVertexName() << endl;

	}

}

