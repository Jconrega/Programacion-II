#ifndef _QUEUE_H_
#define _QUEUE_H_

#include "DynArrayP2.h"
template<class Type>

class Queue
{
public:
	Queue();
	~Queue();

	void Push(const Type& data)
	{
		arr.pushBack(data);
	}
	
	void Pop()
	{
		arr.Flip();
		arr.popBack();
	}



private:

	DynArray<Type> arr;
};

#endif