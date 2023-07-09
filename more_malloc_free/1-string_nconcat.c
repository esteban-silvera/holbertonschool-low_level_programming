#include "main.h"
#include <stdlib.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, l = 0, b = 0;
	char *string;

	for (x = 0; s2[x] != '\0'; x++)
	{
		l++;
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		b++;
	}
	string = malloc(sizeof(char*) * b + n);
	if (!string)
	{
		return (NULL);
	}

	for (x = 0 ; s1[x] != '\0'; x++)
	{
		string[x] = s1[x]
	}
	for (x = 0 ; x != n; x++, b++)
	{
		string[b] = s2[x];
	}
	return (string);
}
