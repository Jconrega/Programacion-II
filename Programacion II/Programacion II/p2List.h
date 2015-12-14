#ifndef _P2LIST_H_
#define _P2LIST_H_

#include "Globals.h"

template<class Type>
struct node_list
{
	Type				data;
	node_list<Type>*	next = NULL;
	node_list<Type>*	prev = NULL;
	
	node_list();
	node_list(const Type& data) : data(data){}
	//Es crea destructor per defecte
};

template<class Type>

class p2List
{
public:

	//Ara per ara
	//node_list<Type>*	end;
private:
	node_list<Type>*	start;

public:
	p2List()
	{
		start =  NULL;

	}
	~p2List(){ Clear(); }
	
	uint Size() const
	{
		node_list<Type>* tmp = start;
		uint size = 0;
		while (tmp!= NULL)
		{
			size++;
			tmp = tmp->next;
		}
		
		return size;
	}
	void Clear()
	{
		node_list<Type>* tmp = start;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			delete tmp->prev;	
		}
		delete tmp;

	}

	const node_list<Type>* GetStart() const
	{
		return start;
	}
	node_list<Type>* GetLast() 
	{
		node_list<Type>* tmp = start;
		for (uint i = 0; i <= Size(); i++)
		{
			start = start->next;
		}
		return tmp;
	}
	void PushBack( const Type& data)
	{
		node_list<Type>* new_node = new  node_list<Type>(data);
		if (start == NULL)
			start = new_node;
		else
		{
			node_list<Type>* tmp = GetLast();
			tmp->next = new_node;
			new_node->prev = tmp;
		}
	}
	bool PopBack(Type& ret)
	{
		if (start == NULL)
			return false;
		else
		{
			ret = GetLast()->data;
			if (GetLast()->prev != NULL)
			{
				GetLast() = GetLast()->prev;
				delete GetLast()->next;
				GetLast()->next = NULL;
			}
			else
			{
				delete start;
				start = GetLast() = NULL;
			}

			return true;
		}
	}
	bool EmptyData()
	{
		node_list<Type>* tmp = start;
		while (tmp->next == NULL)
		{
			if (tmp->data != NULL)
				return false;
			tmp = tmp->next;
		}
		return true;
	}
	bool Empty() const
	{
		return GetStart() == NULL;
	}

};


//Deures
/*

front()
back()
push_front()
pop_back()
pop_front()
insert()
remove()
*/

#endif