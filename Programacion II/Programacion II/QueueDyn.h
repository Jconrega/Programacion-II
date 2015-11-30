#ifndef _QUEUEDYN_H_
#define _QUEUEDYN_H_

#include "DynArrayP2.h"
template<class Type>

class Queue
{
public:
	Queue();
	~Queue();

	void Push(const Type& data)
	{
		if (arr.count_flip == 1)
		{
			arr.Flip();
			arr.count_flip = 0;
		}
		arr.pushBack(data);
	}
	
	void Pop()
	{
		if (arr.count_flip != 1)
			arr.Flip();
		arr.popBack();
	}



private:

	DynArray<Type> arr;
};

#endif