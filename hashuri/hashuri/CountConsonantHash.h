#pragma once
#include "Hash.h"
#include <iostream>

class CountConsonantHash :public Hash {
public:
	CountConsonantHash() ;
	long long CalculHash(const char* string) override;
};