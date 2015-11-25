#ifndef __DYNARRAYP2__H__
#define __DYNARRAYP2__H__
#include <stdio.h>
#include "Globals.h"
#include <assert.h>

#define BLOCK 16

template <class TYPE>
class DynArray{

	uint capacity = 0;
	uint numElements = 0;
	TYPE* data = NULL;

public:

	DynArray() : capacity(BLOCK)	{ data = new TYPE[capacity] };

	DynArray(uint memory_reserve)
	{
		capacity = memory_reserve;
		data = new TYPE[capacity];
	
	}
	DynArray(const DynArray& arr) : numElements(arr.numElements){

		capacity = MAX(BLOCK, numElements);
		data = new TYPE[capacity];
		memcpy(data, arr.data, arr.numElements * sizeof(TYPE));
	}

	~DynArray(){ if (data != NULL) { delete[] data } };

	//afegeix un!! valor al final
	void pushBack(const TYPE& unicData)
	{
		if (capacity <= numElements) 
		{
			TYPE* tmp = data;
			data = new TYPE[capacity + BLOCK];
			memcpy(data, tmp, numElements*sizeof(TYPE));
			delete[] tmp;
			//creem sumant un block
		}
		//Posem a las poscicio que toca i indiquem el numero de elements que tenim
		data[num_elements++] = unicData;
	}
	uint Capacity()const
	{
		return capacity;
	}

	//falten coses per fer
	TYPE At(uint position) const
	{
		if (position <= numElements)
		{
			return data[position];
		}
		return NULL;
		
	}

	bool Empty() const
	{
		//Retorna true si es cumpleix
		return (numElements == o);
	}
	void Clear()
	{
		numElements = 0;
	}


	TYPE popBack()
	{
		return data[--numElements];
	}

	void Flip()
	{
		TYPE* start = &data[0];
		TYPE* end = &data[num_elements - 1];

		while (start < end)
			SWAP(*start++, *end--);
	}
	//falten coses
	void Insert(const TYPE& element, uint position)
	{
		if (position == num_elements)
		{
			pushBack(element);
			return true;
		}

		else if (num_elements + 1 > mem_capacity)
		{
			for (unsigned int i = num_elements; i > position; --i)
			{
				data[i] = data[i - 1];
			}

			data[position] = element;
			++num_elements;
		}
	}
	void Shrink_to_fit()
	{
		if (capacity > numElements)
		{
			TYPE* tmp = data;
			data = new TYPE[numElements];
			memcpy(data, tmp, numElements*sizeof(TYPE));
			delete[] tmp;

		}
	}
	const TYPE* operator [](uint position)const
	{
		if (position > numElements)
			return NULL;
		return data[position];
	}
	TYPE* operator [](uint position)
	{
		if (position > numElements)
			return NULL;
		return data[position];
	}

	TYPE operator =(const TYPE& element)
	{
		for (int i = 0; i < numElements; i++)
		{
			element[i] = data[i]
		}
		return element;
	}
};
#endif

