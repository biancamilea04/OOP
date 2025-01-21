#include "Apple.h"

Apple::Apple(int pret, int cantitate, const char* fr): Price(pret),Quantity(cantitate),from(fr)
{
}

Apple::~Apple()
{
}

const char* Apple::GetType()
{
	return "Apple";
}

int Apple::GetQuantity()
{
	return Quantity;
}

int Apple::GetPrice()
{
	return Price;
}

void Apple::Print()
{
	printf("(from=%s) Price=%d Quantity=%d ", from,Price,Quantity);
}


