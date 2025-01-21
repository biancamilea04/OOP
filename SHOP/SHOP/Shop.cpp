#include "Shop.h"

Shop::Shop()
{
	magazin[0] = nullptr;
	nrObiecte = 0;
	numeObiecte[0] = nullptr;
}

Shop::~Shop()
{


}

void Shop::Add(obiect* ceva)
{  
	//magazin[nrObiecte] = new obiect*;
	magazin[nrObiecte] = ceva;
	numeObiecte[nrObiecte] = new char[100];
	numeObiecte[nrObiecte] = ceva->GetType();
	nrObiecte++;

}

int Shop::GetTotalPrice()
{
	int nr = 0;
	for( int i = 0; i< nrObiecte;i++){
		nr += magazin[i]->GetPrice();
	}
	return nr;
}

int Shop::GetQuantity(const char* nume)
{
	int nr = 0;
	for (int i = 0; i < nrObiecte; i++) {
		nr += magazin[i]->GetQuantity();
	}
	return nr;
}

void Shop::List()
{
	for (int i = 0; i < nrObiecte; i++) {
		magazin[i]->Print();
		printf("\n");
	}
}



