#ifndef _QUEUELIST_H_
#define _QUEUELIST_H_

#include "p2List.h"

template<class Type>

class Queue
{
public:

	Queue();
	~Queue(){ delete[] list; }

	void Push(const Type& data)
	{
		if (data != NULL)
			list.PushBack(data);
	}

	Type* Pop(Type& ret)
	{
		//return list.(ret);

	}
	bool Peek() const
	{
		if (list.GetStart() != NULL)
		{
			return list.GetLast()->data;
		}
		return false;
	}

private:

	p2List<Type> list;


};


#endif