#pragma once
#include "Hash.h"

class CountAsciiHash :public Hash {
public:
	CountAsciiHash() ;
	long long CalculHash(const char* string) override;
};