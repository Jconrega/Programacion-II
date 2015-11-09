#ifndef __DYNARRAYP2__H__
#define __DYNARRAYP2__H__
#include <stdio.h>
#include "Globals.h"

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
		capacity += memory_reserve;
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
		//falta comprobar si la poscició existeix
		return data[position];
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

	//constructor(memory_reserve)
	//at() donam el que hi hagi en la posició que vulgui
	//capacity()retorna capaacity
	//size()retorna size
	//clear() important
	//operador += con funciones que empicen por mem
	//prefix 
};
#endif

//const ()

// ()const