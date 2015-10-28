#include "p2String.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

p2String::p2String()
{
	capacity = 1;
	strng = new char[capacity];
	strng = '\0';
}

p2String::~p2String()
{
	if (strng!=NULL)
		delete[] strng;
}

//no surt
p2String::p2String(const char* strng_c)
{

}

p2String::p2String(const p2String& str)
{
	capacity = str.Capacity();
	strng = new char[capacity];
	strcpy_s(strng, capacity, str.strng);
}

uint p2String::Capacity()const
{
	return capacity;
}
bool p2String::operator==(const char* strng_c) const
{
	if (strlen(strng_c) != capacity - 1)
		return false;
	if (strcmp(strng, strng_c) != 0)
		return false;

	return true;
}
//Acabar
bool p2String::operator==(const p2String& c) const
{
	if (c.GetCapacity()!= capacity - 1)
		return false;
	if (strcmp(strng, c) != 0)
		return false;

	return true;
}
bool p2String::operator!=(const char* strng_c) const{
	if (strlen(strng_c) != capacity - 1)
		return true;
	if (strcmp(strng, strng_c) != 0)
		return true;

	return false;
}
//Acabar
bool p2String::operator!=(const p2String& c) const{
	if (c.GetCapacity() != capacity - 1)
		return true;
	if (strcmp(strng, c) != 0)
		return true;

	return false;
}
const char* p2String::c_str()const
{
	return strng;
}
uint p2String::GetCapacity(const char* strng_c)const
{
	return strlen(strng_c);
}