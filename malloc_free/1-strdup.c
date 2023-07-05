#include "main.h"
#include <stdlib.h>

char
*_strdup(char *str)
{
	char *string;
	int x;
	int n = 0;

	if (str ==  NULL)
	{
		return (NULL);
	}

	for (x = 0 ; str[x] != '\0'; x++)
	{
		n++;
	}

	string = malloc(sizeof(char) * n);
	if (!string)
	{
		return (NULL);
	}

	for (x = 0; x != n; x++)
	{
		string[x] = str[x];
	}

	if (string == NULL)
	{
		return (NULL);
	}
	return (string);
}
