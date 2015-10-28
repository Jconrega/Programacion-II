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

p2String::p2String(const char* strng_c)
{
	capacity = strlen(strng_c) + 1;
	strng = new char[capacity];
	strcpy_s(strng, capacity, strng_c);

}

p2String::p2String(const p2String& str)
{
	capacity = strlen(str.c_str())+1;
	strng = new char[capacity];
	strcpy_s(strng, capacity, str.strng);
}

p2String::p2String(uint memory)
{
	capacity = memory;
}

uint p2String::Capacity()const
{
	return capacity;
}

bool p2String::operator==(const char* strng_c) const
{
	if (strcmp(strng, strng_c) != 0)
		return false;

	return true;
}

bool p2String::operator==(const p2String& c) const
{
	if (strcmp(strng, c.strng) != 0)
		return false;

	return true;
}

bool p2String::operator!=(const char* strng_c) const{

	if (strcmp(strng, strng_c) != 0)
		return true;

	return false;
}

bool p2String::operator!=(const p2String& c) const{

	if (strcmp(strng, c.strng) != 0)
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