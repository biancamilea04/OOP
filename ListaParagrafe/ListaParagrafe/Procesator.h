#pragma once
#include "ListaParagrafe.h"

class Procesator {

public:
	virtual ~Procesator() {};
	virtual void Print()=0;
	virtual void Proceseaza(const char* paragraf) = 0;

};