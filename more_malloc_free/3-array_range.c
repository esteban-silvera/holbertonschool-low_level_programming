#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int x;
	char *string;

	string = malloc(sizeof(char*) * max);
	if (!string)
	{
	return (NULL);
	}
	for (x = 0; x != max; x++, min++)
	{
		string[x] = min;
	}
	return (string);
}
