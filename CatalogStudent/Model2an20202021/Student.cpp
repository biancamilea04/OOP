#include "Student.h"

Student::Student()
{
	nrNote = 0;
	nrMaterii = 0;
	nume = nullptr;

}

Student::Student(char* materie, int nota)
{

	note[nrNote] = nota;
	materii[nrMaterii] = new char;
	materii[nrMaterii]=materie;
	nrNote++;
	nrMaterii++;

}

Student::Student(const char* name)
{
	nume = name;
}

int Student::GetNota(int index)
{
	return note[index];
}

int Student::GetNrNote()
{
	return nrNote;
}

int& Student::operator[](const char* m)
{
	for (int i = 0; i < this->nrMaterii; i++) {
		if (this->materii[i] == m) {
			return this->note[i];
		}
	}
	materii[nrMaterii++] = m;
	return note[nrNote++];
}

const char* Student::GetName()
{
	return nume;
}

// asta nu merge
void Student::PrintNote()
{
	for (int i = 0; i < this->nrMaterii; i++) {
		std::cout<<"   " << this->materii[i] << " => " << this->note[i] << std::endl;
	}
}


Student::operator float()
{
	float medie = 0;
	for (int i = 0; i < this->GetNrNote(); i++) {
		medie += this->GetNota(i);
	}
	return medie / this->GetNrNote();
}




// 
//