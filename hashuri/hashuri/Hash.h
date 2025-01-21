#pragma once
#include <iostream>

 class Hash {
public:
	Hash() {};
	virtual ~Hash() {};
	virtual long long CalculHash(const char* string)=0;

};
