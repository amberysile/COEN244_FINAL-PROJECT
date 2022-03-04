//#include <iostream>
////#include "Vertex.h"
//#include "Graph.h"
//using namespace std;
//
//// ref: https://www.geeksforgeeks.org/find-if-there-is-a-path-between-two-vertices-in-a-given-graph/
//class Graph
//{
//    int course;    // No. of vertices
//    bool ** //list<int>* adj;    // Pointer to an array containing adjacency lists
//public:
//    Graph(int V);  // Constructor
//    void addEdge(int v, int w); // function to add an edge to graph
//    bool isReachable(int s, int d);
//};
//
////course list for sequence corresponding to their IDs
//const string courses[] = {
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
//};
//
//int main() {
//	//initialize courseDependancy to have 15 nodes
//	Graph courseDependancy(15);
//
//	//create the edges for these nodes based on prereqs
//	//16 edges in total 
//	courseDependancy.addEdge(12,0); //math 204 is a prereq of coen231
//	courseDependancy.addEdge(12,1);
//	courseDependancy.addEdge(12,8);
//	courseDependancy.addEdge(12,7);
//	courseDependancy.addEdge(13,8);
//	courseDependancy.addEdge(13,7);
//	courseDependancy.addEdge(14,4);
//	courseDependancy.addEdge(6,11);
//	courseDependancy.addEdge(5,11);
//	courseDependancy.addEdge(0,3);
//	courseDependancy.addEdge(1,2);
//	courseDependancy.addEdge(1,10);
//	courseDependancy.addEdge(8,10);
//	courseDependancy.addEdge(7,10);
//	courseDependancy.addEdge(7,4);
//	courseDependancy.addEdge(2,3);
//
//
//
//	return 0; 
//}