#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstring>

using namespace std;

bool isPrime(int n)
{
	int d = 2;
	if (n < d || n % d == 0)
		return false;
	for (d = 3; d * d <= n; d = d + 2)
		if (n % d == 0)
			return false;
	return true;
}

int tr(char s[])
{
	int p = 1;
	int aux=0;
	for (int i = 0; i < strlen(s)-1; i++)
	{
		aux = aux * 10 + (s[i] - '0');
	}
	return aux;
}

int main()
{

/*	int sum = 0;
	char c;

	FILE* pFile;
	pFile = fopen("in.txt", "r");
	if (pFile != NULL)
    
		sum = sum + (c - '0');

	fclose(pFile);
*/

	char s[100], cuvinte[100][100],aux[100];

	printf("Introduceti sirul de caractere: ");
	scanf("%[^\n]", s);
	
	int i = 0;

	char *p;

	p = strtok(s, " ");
	while (p != NULL)
	{
		strcpy(cuvinte[i], p);
		p = strtok(NULL, " ");
		i++;
	}

	int n = i;
	
	for( i = 0; i<n-1; i++)
		for (int j = i+1; j < n; j++)
			if (strcmp(cuvinte[i], cuvinte[j]) > 0)
			{
				char aux[100];
				strcpy(aux, cuvinte[i]);
				strcpy(cuvinte[i], cuvinte[j]);
				strcpy(cuvinte[j], aux);
			}

	for (i = 0; i < n; i++)
		printf("%s\n", cuvinte[i]);

	char aux1[100] = "";
		for (i = 0; i < n; i++)
		{
			strcat(aux1, cuvinte[i]);
			strcat(aux1, " ");
	    }
    
		printf("%s\n", aux1);
	//printf("%s\n", s);
	
/*
	FILE* fisier;
	char s[100]; 
	int suma = 0;

	fisier = fopen("in.txt", "r"); 

	while (fgets(s, sizeof(s), fisier) != NULL) {
		suma = suma + tr(s);
	}
	
	printf("%d\n", suma);
	
	fclose(fisier);

	
	return 0;
}