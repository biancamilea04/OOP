#include "Catalog.h"

Catalog::Catalog(){
    nr = 0;
}

void Catalog::operator+=(const char* n)
{
    studenti[nr] = new Student(n);
    nr++;

}

Student& Catalog::operator[](const char* name)
{
    for (int i = 0; i < nr; i++) {
        if (studenti[i]->GetName() == name) {
            return* studenti[i];
        }
    }
    return* studenti[nr++];
}

Student& Catalog::operator[](int index)
{
    return* studenti[index];
}

int Catalog::GetCount()
{
    return nr;
}


