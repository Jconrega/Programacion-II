#ifndef _STACKDYN_H_
#define _STACKDYN_H_

#include "DynArrayP2.h"


template<class Type>

class Stack
{
public:
	Stack();
	~Stack();

	void Push(const Type& data)
	{
		arr.pushBack(data);
	}
	Type* Pop()
	{
		arr.popBack();
	}

private:

	DynArray<Type> arr;
};

#endif