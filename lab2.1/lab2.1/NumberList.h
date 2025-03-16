#pragma once
#include <cstring>
// daca nu mention ca i public,privat, se considera automat privat
class NumberList
{
	int count;
	int * numbers = nullptr;
	int maxCount;
public:
	int GetCount()
	{
		return count;
	}
	int GetNumar(int a);
	void init();
	void sort();
	void print();
	void add(int x,int i);
	void initCount(int x)
	{   
		count = x;
		numbers = new int[count];
	}
	void initCountMax(int x)
	{
		maxCount = x;
	}

};

