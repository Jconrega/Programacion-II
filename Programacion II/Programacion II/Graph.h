#ifndef __GRAPH_H__
#define __GRAPH_H__
#include "p2List.h"

template <class Type>
class Graph
{


public:
	Graph();
	~Graph();
	struct node
	{
		Type data;
		p2List<node*> links;
		node(const Type& data) :data(data){}
		void AddLink(node* n)
		{
			links.PushBack(n);
		}
		//Inventado
		/*
		void DeleteLink(uint pos)
		{
		links.Empty(pos);
		}
		*/
	};
	node* AddNode(Type data)
	{
		node* new_node = new node(data);
		nodes.PushBack(new_node);
		return new_node;
	}

	/*node* GetNode() const
	{
		return nodes;
	}*/

	bool Goto(node* start, node* end)
	{
		//Comprobar si existeix start i si existeix end
		if (start == NULL || end == NULL)
			return false;

		//Si start == a end
		if (start == end)
			return true;
		
		//Si start te 0 links es false
		if (sta)
		//{
			//busco end als meus linls--> true
			//si no el troba  agafo el primer fill 
		//}
	}

private:

	p2List<node*>	 nodes;
};

#endif