#include "ProcesatorNumaraPropozitii.h"

ProcesatorNumaraPropozitii::ProcesatorNumaraPropozitii()
{
	nrPropozitii = 0;
	count = 0;
}

ProcesatorNumaraPropozitii::~ProcesatorNumaraPropozitii()
{
}

void ProcesatorNumaraPropozitii::Print()
{
	//std::cout << nrPropozitii << " propozitii \n";

	printf("%d propozitii \n ",nrPropozitii);
}

void ProcesatorNumaraPropozitii::Proceseaza(const char* paragraf)
{
	int i = 0;
	while (paragraf[i] != NULL) {
		if (paragraf[i] == '.' || paragraf[i] == '?' || paragraf[i] == '!') {
			nrPropozitii++;
		}
		i++;
	}

}
	