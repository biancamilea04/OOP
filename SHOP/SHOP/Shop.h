#pragma once
#include "obiect.h"
class Shop
{
	obiect* magazin[100];
	int nrObiecte;
	const char* numeObiecte[100];
public:
	Shop();
	~Shop();
	void Add(obiect* ceva);
	int GetTotalPrice();
	int GetQuantity(const char* nume);
	void List();
};



