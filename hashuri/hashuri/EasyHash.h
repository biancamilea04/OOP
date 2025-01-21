#pragma once
#include "Hash.h"

class EasyHash :public Hash {
public:
	EasyHash() ;
	long long CalculHash(const char* string) override;
};