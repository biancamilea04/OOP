#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream>



using namespace std;

int transform(char s[])
{
	int aux=0;
	for (int i = 0; i < strlen(s); i++)
	{   
		if( s[i]>='0'&&s[i]<='9')
		aux = aux * 10 + (s[i] - '0');
	}
	return aux;
}

int main()
{
	FILE* fisier;
	fisier = fopen("in.txt", "r");
	char s[100];
	int suma = 0;

	while (fgets(s, sizeof(s), fisier) != NULL)
	{
		suma = suma + transform(s);
	}

	printf("%d\n", suma);

	fclose(fisier);

	return 0;
}