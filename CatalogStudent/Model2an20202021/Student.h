#pragma once
#include <iostream>
#include <string.h>

class Student {
	const char* nume;
	const char* materii[100];
	int note[100];
	int nrMaterii;
	int nrNote;
public:
	Student();
	Student( char* materie, int nota);
	Student(const char* nume);
	int GetNota(int index);
	int GetNrNote();
	int& operator[] (const char* materie);
	const char* GetName();
	void PrintNote();
	operator float();


};

// mate
// romana
// franceza
