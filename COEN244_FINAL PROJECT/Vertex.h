#pragma once
#include <iostream>
using namespace std;

class Vertex {

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
