#ifndef _P2STRING_H_
#define _P2STRING_H_

typedef unsigned int uint;

class p2String
{
public:
	//Constructor  buit
	p2String();
	//From C string
	p2String(const char* strng_c);
	//Constructor de copia
	p2String(const p2String& str);
	//Destructor
	~p2String();
	//Capacity
	uint Capacity()const;
	//Trobem la capacitat
	uint GetCapacity(const char* strng_c)const;
	//c_str() tronara la cadena com una cadena de c
	const char* c_str()const;
	//operador == qaun reps cadena de c
	bool operator==(const char*strng_c)const;
	//operador == quan reps un p2String
	bool operator==(const p2String& c)const;
	//operador != quan repos una cadena de c
	bool operator!=(const char*strng_c)const;
	//operador != quan reps un p2String
	bool operator!=(const p2String& c)const;
	

private:

	char* strng;
	uint capacity;

};
#endif // !_P2STRING_H_
