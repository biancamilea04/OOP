#pragma once
#include "obiect.h"
class Apple :public obiect
{
private:
	int Price;
	int Quantity;
	const char* from;
public:
	Apple(int pret, int cantitate, const char* fr);
	~Apple();
	 const char* GetType() override;
	 int GetQuantity() override;
	 int GetPrice() override;
	 void Print() override;
};

