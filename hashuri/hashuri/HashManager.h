#pragma once
#include <iostream>
#include "Hash.h"


class HashManager {
	const char* nume[100];
	Hash* hash[100];
	int countHash;
public:
	HashManager();
	~HashManager();
	Hash*& operator []( const char* var);
	void print_hashes(const char* val);


};