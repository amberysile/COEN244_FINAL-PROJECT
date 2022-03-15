#include <iostream>
#include "Vertex.h"
#include "Edge.h"
#include "Graph.h"
#include "Prereq.h"
using namespace std;

//"coen231",	  // 0
//"coen243",	  //1
//"coen244",	  //2
//"coen352",	  //3
//"elec273",	  //4
//"engr201",	  //5
//"engr202",	  //6
//"engr213",	  //7
//"engr233",	  //8
//"engr301",	  //9
//"engr391",	  //10
//"engr392",	  //11
//"math204",	  //12
//"math205",	  //13
//"phys205",	  //14
//courseDependancy.addEdge("math204", "coen231"); //math 204 is a prereq of coen231
//courseDependancy.addEdge(12, 1);
//courseDependancy.addEdge(12, 8);
//courseDependancy.addEdge(12, 7);
//courseDependancy.addEdge(13, 8);
//courseDependancy.addEdge(13, 7);
//courseDependancy.addEdge(14, 4);
//courseDependancy.addEdge(6, 11);
//courseDependancy.addEdge(5, 11);
//courseDependancy.addEdge(0, 3);
//courseDependancy.addEdge(1, 2);
//courseDependancy.addEdge(1, 10);
//courseDependancy.addEdge(8, 10);
//courseDependancy.addEdge(7, 10);
//courseDependancy.addEdge(7, 4);
//courseDependancy.addEdge(2, 3);


int main() {

	Prereq elec;

	//test addVertex func
	elec.addVertex("coen231"); //this gets ID 1
	elec.addVertex("coen243");
	elec.addVertex("coen244");
	elec.addVertex("coen352");
	elec.addVertex("elec273");
	elec.addVertex("engr201");
	elec.addVertex("engr202");
	elec.addVertex("engr213");
	elec.addVertex("engr233");
	elec.addVertex("engr301");
	elec.addVertex("engr391");
	elec.addVertex("engr392");
	elec.addVertex("math204");
	elec.addVertex("math205");
	elec.addVertex("phys205");

	//test searchVertex func
	cout << elec.searchVertex("coen231") << endl;
	cout << elec.searchVertex("elec273") << endl;
	cout << elec.searchVertex("math205") << endl;
	cout << elec.searchVertex("phys205") << endl;
	cout<< elec.searchVertex("soen300");
		
	//math204 is a pre-req of coen231
	elec.addEdge("math204", "coen231");
	elec.addEdge("math204", "coen243");
	elec.addEdge("math204", "engr233");
	elec.addEdge("math204", "engr213");
	elec.addEdge("math205", "engr213");
	elec.addEdge("phys205", "elec273");
	elec.addEdge("engr202", "engr392");
	elec.addEdge("engr201", "engr392");
	elec.addEdge("coen231", "coen352");
	elec.addEdge("coen243", "coen244");
	elec.addEdge("coen243", "engr391");
	elec.addEdge("engr233", "engr391");
	elec.addEdge("engr213", "engr391");
	elec.addEdge("engr213", "elec273");
	elec.addEdge("coen244", "coen352");


	//test searchEdge
	cout << "engr201 -> engr392 exists? " << elec.searchEdge("engr201", "engr392") << endl;

	cout << "engr391 -> math204 exists? " << elec.searchEdge("engr391", "math204") << endl;
		
		
	//operator overloading test 
	//equality operator:
	Prereq G1, G2; 
	G1.addVertex("coen231");
	G2.addVertex("math204");
	G2.addVertex("elec273");
	//cout << G1 == G2;
	if (G1 == G2) {
		cout << "G1 is the same as G2";
	}
	else
		cout << "G1 is not the same as G2";
	

	//test for display func
	elec.display();
		
		
		
		
		
		




	return 0;
}