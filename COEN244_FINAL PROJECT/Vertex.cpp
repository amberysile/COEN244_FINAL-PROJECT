#include <iostream>
#include "Vertex.h"
using namespace std;


//initialize the counter to be 0
int Vertex::counter = 0; 

//constructor
Vertex::Vertex() {

	counter++; 
	ID = counter; 
	vertexName = " ";
	cout << "The Vertex Constructor is called." << endl; 

}

void Vertex::setVertexName(string s) {
	vertexName = s;
}

string Vertex::getVertexName() {
	return vertexName;
}