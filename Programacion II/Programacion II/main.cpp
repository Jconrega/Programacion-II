#include <iostream>
#include "Point2D.h"
#include "p2String.h"



class MyClass
{
public:
	MyClass(int n) : num(n) { }

	int num;

};

template <class T>
void SWAP(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	MyClass* pclass = new MyClass(5);

	MyClass a1(5);
	MyClass b1(a1);

	iPoint punto1;
	punto1.x = 8;
	punto1.y = 7;

	iPoint punto2;
	punto2.x = 10;
	punto2.y = 9;

	SWAP(punto1, punto2);

	int a = 5;

	printf("%d", a);

	return 0;
}


