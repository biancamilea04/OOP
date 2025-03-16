#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main()
{
	char s[100],vect[100][100];
	int n = 0;

	scanf("%[^\n]", s);

	for (int i = 0; i < strlen(s) - 1; i++)
	{
		char aux[] = "";
			if (s[i] != ' ')
				strncat(aux, s+i,1);
			else
			{
				strcpy(vect[i],)
			}
	}

	printf("%s", s);
	return 0;
}