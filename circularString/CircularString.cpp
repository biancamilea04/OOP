#include "CircularString.h"

CircularString::CircularString(char c, int nr)
{
	size = nr;
	string = new char[nr+1];
	for (int i = 0; i < size; i++) { 
		string[i] = c;
	}
	string[size] = NULL;
}

CircularString::CircularString()
{
}

CircularString::~CircularString()
{
	//delete[] string;
}

CircularString::operator const char* ()
{
	return string;
}

CircularString CircularString::operator+=(const char c)
{
	for (int i = size-1; i >=1; i--) {
		string[i] = string[i - 1];
	}
	string[0] = c;
	return *this;
}

CircularString::operator int()
{
	return size;
}

int CircularString::operator()(int index)
{
	if (index < size)
		return string[index];
	else
		return 0;
}

CircularString CircularString::operator++()
{
	char ultim = string[size - 1];
	for (int i = size - 1; i >= 1; i--) {
		string[i] = string[i - 1];
	}
	string[0] = ultim;
	return *this;
}
//cba**
//ccba

CircularString& CircularString::operator--()
{
	char primul = string[0];
	for (int i = 0; i < size - 1; i++) {
		string[i] = string[i + 1];
	}
	string[size - 1] = primul;
	return *this;
}

//ba**c
//a**cc
//a**cb

