#pragma once
#include <iostream>

class CircularString
{
private:
	char* string;
	int size;
public:
	CircularString(char c, int nr);
	CircularString();
	~CircularString();
    operator const char* ();
	CircularString operator +=(const char c);
	operator int();
	int operator()(int index);
	CircularString* operator++ ();
	CircularString& operator-- ();


};

