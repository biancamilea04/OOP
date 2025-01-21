#pragma once
#include "ListaParagrafe.h"
#include <iostream>
#include "Procesator.h"

class ProcesatorNumaraPropozitii: public Procesator {
int nrPropozitii;
int propozitii[100];
int count;
public:
	ProcesatorNumaraPropozitii();
	~ProcesatorNumaraPropozitii();
	 void Print() override;
	 void Proceseaza(const char* paragraf) override;
};