#include <iostream>
#include "Point2D.h"
#include "p2String.h"
#include "Globals.h"
#include "p2List.h"
#include "Graph.h"




int main()
{

	Graph<int> g;
	Graph<int>::node* node_a = g.AddNode(1);
	Graph<int>::node* node_b = g.AddNode(2);
	Graph<int>::node* node_c = g.AddNode(3);
	Graph<int>::node* node_d = g.AddNode(4);
	Graph<int>::node* node_e = g.AddNode(5);


	node_a->AddLink(node_b);
	node_b->AddLink(node_c);
	node_c->AddLink(node_b);
	node_d->AddLink(node_e);
	

	/*Graph<int>* g;
	g->AddNode(8);
	g->AddNode(9);
	g->AddNode(10);*/

	system("PAUSE");
	return 0;
}


