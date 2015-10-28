#ifndef _P2STRING_H_
#define _P2STRING_H_

typedef unsigned int uint;

class p2String
{
public:
	//Constructor  buit
	p2String();
	//Constructor de copia
	p2String(const char* str);
	//From C string
	p2String(const p2String& str);
	//Destructor
	~p2String();
	//Capacity
	int Capacity()const;
	//c_str() tronara la cadena com una cadena de c
	const char* cstr();
	//operador ==
	bool operator==(const char*c)const;
	//operador !=
	bool operator!=(const char*c)const;
	

private:

	char* strng;
	uint capacity;

};


#endif // !_P2STRING_H_
