#include "main.h"
#include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *string;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(nmemb * size);
	if (!string)
	{
		return (NULL);
	}
	for (x = 0; x < nmemb * size; x++)
	{
		string[x] = 0;
	}
	return (string);
}
