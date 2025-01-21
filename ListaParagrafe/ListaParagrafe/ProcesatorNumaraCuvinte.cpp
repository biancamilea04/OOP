#include "ProcesatorNumaraCuvinte.h"
#include <string.h>

ProcesatorNumaraCuvinte::ProcesatorNumaraCuvinte()
{
	cuv[0] = nullptr;
	nrcuv = 0;
}

ProcesatorNumaraCuvinte::~ProcesatorNumaraCuvinte()
{
}

void ProcesatorNumaraCuvinte::Print()
{
	int i;
	for ( i = 0; i < nrcuv-1; i++) {
		std::cout << cuv[i] << ": " << aparitii[i] << ", ";
	}
	std::cout << cuv[nrcuv - 1] << ": " << aparitii[nrcuv - 1];
}

void ProcesatorNumaraCuvinte::Proceseaza(const char* paragraf)
{
	int i = 0;
	while (paragraf[i]!=NULL)
	{
		char* cuvant=new char[100];
		int j = 0;
		while (paragraf[i] != NULL && paragraf[i] != '.' && paragraf[i] != '?' && paragraf[i] != '!' && paragraf[i] != ' ' && paragraf[i] != ',') {
			cuvant[j] = paragraf[i];
			j++;
			i++;
		}
		cuvant[j] = NULL;
		int k;
		int sw = 0;

		for ( k = 0; k < nrcuv; k++ ) {

			if (cmp(cuvant, cuv[k])) {
				aparitii[k]++;
				break;
		   }
			
		}

		if (nrcuv==k) {
			cuv[nrcuv] = cuvant;
			aparitii[nrcuv] = 1;
			nrcuv++;
		}
		else {
			delete[] cuvant;
		}

		i++;
	}
}

bool ProcesatorNumaraCuvinte::cmp(const char* s1, const char* s2)
{
	int i = 0;
	while (s1[i] != NULL) {
		if (s1[i] != s2[i]) {
			return false;
		}
		i++;
	}
	if (s1[i] != NULL || s2[i] != NULL) {
		return false;
	}
	return true;
}
