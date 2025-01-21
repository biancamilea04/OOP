#pragma once
#include <iostream>
class obiect
{
public:
	virtual ~obiect() {};
	virtual const char* GetType() = 0;
	virtual int GetQuantity() = 0;
	virtual int GetPrice() = 0;
	virtual void Print()=0;

};

