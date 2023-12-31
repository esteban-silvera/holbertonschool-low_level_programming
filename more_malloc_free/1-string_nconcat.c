#include "main.h"
#include <stdlib.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, l = 0, b = 0;
	unsigned int ux;
	char *string;

	if (s1 == NULL)
	{
		s2 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; s2[x] != '\0'; x++)
	{
		l++;
	}
	for (x = 0; s1[x] != '\0'; x++)
	{
		b++;
	}
	if (n > 1)
	{
		string = malloc(sizeof(char) * (b + n) + 1);
	}
	else
	{
		string = malloc(sizeof(char));
	}
	if (!string)
	{
		return (NULL);
	}

	for (x = 0 ; s1[x] != '\0'; x++)
	{
		string[x] = s1[x];
	}
	for (ux = 0 ; s2[ux] != '\0' && ux < n; ux++, b++)
	{
		string[b] = s2[ux];
	}
	string[b] = '\0';
	return (string);
}
