#pragma once
#include "ListaParagrafe.h"
#include <iostream>
#include "Procesator.h"

class ProcesatorNumaraCuvinte :public Procesator {
    char* cuv[100];
	int nrcuv;
	int aparitii[100];
public:
	ProcesatorNumaraCuvinte();
	~ProcesatorNumaraCuvinte();
	void Print() override;
	void Proceseaza(const char* paragraf) override;
	bool cmp(const char* s1, const char* s2);
};