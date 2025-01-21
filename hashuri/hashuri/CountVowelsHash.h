#pragma once
#include "HashManager.h"

class CountVowelsHash : public Hash {
public:
	CountVowelsHash() ;
	long long CalculHash(const char* string) override;
};