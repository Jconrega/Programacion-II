#pragma once


#define BLOCK 16

#define MAX(a,b) ((a)>(b))?(a):(b)
#define MIN(a,b) ((a)<(b))?(a):(b)

typedef Point2D<int> iPoint;
typedef Point2D<float> fPoint;
typedef unsigned int uint;

template <class T>
void SWAP(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}