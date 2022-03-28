//COEN244 FINAL PROJECT

#pragma once
#include <iostream>
using namespace std;

class Vertex {

	friend class Graph; //class Graph has access to all members (attributes & funcs) of class Vertex

private: 
	int ID; 
	static int counter; //remember to initialize in cpp
	string vertexName; 


public: 

	//default constructor 
	Vertex();

	//constructor with parameter 
	Vertex(string s);

	//copy constructor 
	Vertex(const Vertex &oldObj);



	//access func if needed
	void setVertexName(string s);
	string getVertexName();

};
