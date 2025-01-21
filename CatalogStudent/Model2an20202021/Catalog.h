#pragma once
#include <iostream>
#include "Student.h"

class Catalog {
	Student* studenti[100];
	int nr;
public:
	Catalog();
	void operator +=(const char* n);
	Student& operator[](const char* name);
	Student& operator[](int index);
	int GetCount();




};