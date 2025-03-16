#include <iostream>
#include <cstring>
#include "NumberList.h"
using namespace std;

//clasa se imparte in doua fisiere
//.h
//.cpp

int main()
{
	NumberList x;
	int c, cmax;
	cout << "c="; cin >> c;
	cout << "cmax="; cin >> cmax;

	x.initCount(c);
	x.initCountMax(cmax);

	for (int i = 0; i <= x.GetCount(); i++)
	{
		int y;
		cout << "y="; cin >> y;
		x.add(y, i);
	}

	x.print();

	x.add(1, 5);

	cout << endl;

	x.print();

}