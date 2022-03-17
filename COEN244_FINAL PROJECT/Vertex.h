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

	//constructor 
	Vertex();

	//access func if needed
	void setVertexName(string s);
	string getVertexName();

};
