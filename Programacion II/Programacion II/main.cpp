#include <iostream>
#include "Point2D.h"
#include "p2String.h"
#include "Globals.h"
#include "p2List.h"



class MyClass
{
public:
	MyClass(int n) : num(n) { }

	int num;

};

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


	p2String a = "Hola";
	char* b = "mundo";
	a = a += b;
	printf("%s",a.c_str() );

	p2List<int> lista;

	lista.PushBack(1);
	lista.PushBack(2);
	lista.PushBack(3);

	lista.Clear();



	system("PAUSE");
	return 0;
}


