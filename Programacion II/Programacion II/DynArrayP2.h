#ifndef __DYNARRAYP2__H__
#define __DYNARRAYP2__H__
#include <stdio.h>
#include "Globals.h"


template <class TYPE>
class DynArray{

	unsigned int capacity = 0;
	unsigned numElements = 0;
	TYPE* data = NULL;

public:

	DynArray() : capacity(BLOCK)	{ data = new TYPE[BLOCK] };

	DynArray(uint memory_reserve)
	{

	}
	DynArray(const DynArray& Array) : numElements(Array.numElements){

		capacity = MAX(BLOCK, Array.capacity);
		data = new TYPE[capacity];
		memcpy(data, Array.data, Array.numElements * sizeof(TYPE));
	}

	~DynArray(){ if (data != NULL) { delete[] data } };

	void pushBack(const TYPE& unicData){

		data[num_elements++] = unicData;
	}

	//constructor(memory_reserve)
	//at() donam el que hi hagi en la posició que vulgui
	//capacity()retorna capaacity
	//size()retorna size
	//clear() important
	//empty() et retorna true si esta buida

};
#endif