#ifndef __GRAPH_H__
#define __GRAPH_H__
#include "p2List.h"

template <class Type>
class Graph
{
public:
	Graph();
	~Graph();
	void AddNode(Type data)
	{
		node new_node = new node(data);
		nodes.PushBack(new_node);
		delete[] new_node;
	}

private:
	struct node
	{
		Type data;
		p2List<node*> links;
		void AddLink(node* n)
		{
			links.PushBack(n);
		}
		void DeleteLink(uint pos)
		{
			links.Empty(pos);
		}
	};
	p2List<node*>	 nodes;

public:
	bool Goto(node* start, node* end);
};

#endif