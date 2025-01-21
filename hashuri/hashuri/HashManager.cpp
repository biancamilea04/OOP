#include "HashManager.h"

HashManager::HashManager()
{
	nume[0] = nullptr;
	hash[0] = nullptr;
	countHash = 0;
}

HashManager::~HashManager()
{ 

}

Hash*& HashManager::operator[](const char* var)
{
	nume[countHash] = var;
	countHash++;
	return hash[countHash - 1];

}

void HashManager::print_hashes(const char* val)
{
	for (int i = 0; i < countHash; i++) {
		std::cout << hash[i]->CalculHash(val);
		std::cout << std::endl;
	}
}
