	#include "NumberList.h"
	#include <iostream>

	using namespace std;

	void NumberList::init()
	{
		for (int i = 0; i <= count; i++)
			numbers[i] = 0;
	}

	void NumberList::sort()
	{
		for( int i = 0;i<count;i++)
			for (int j = i; j <= count; j++)
				if(numbers[i]>numbers[j])
			{ 
				int aux;
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;

			}
	}

	void NumberList::add(int x, int i)
	{
		if (count <= maxCount)
		{
			{
				numbers[i] = x;
			}
		}
		else
		{
			int* numbers2 = new int[count * 2];
			for (int j = 0; j <= count; j++)
				numbers2[j] = numbers[j];
			numbers2[i] = x;
			delete[] numbers;
			numbers = numbers2;
		}

	}
	int NumberList::GetNumar(int i)
	{
		return numbers[i];
	}

	void NumberList::print()
	{
		for (int i = 0; i <= GetCount(); i++)
			cout << GetNumar(i) << ' ';
	}