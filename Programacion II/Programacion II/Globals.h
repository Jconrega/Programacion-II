#pragma once

#define MAX(a,b) ((a)>(b))?(a):(b)
#define MIN(a,b) ((a)<(b))?(a):(b)

typedef unsigned int uint;

template <class T>
void SWAP(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}