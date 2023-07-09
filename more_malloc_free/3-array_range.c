#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int x;
	int *num;

	string = malloc(sizeof(char*) * max);
	if (!string)
	{
	return (NULL);
	}
	for (x = 0; min != max; x++, min++)
	{
		num[x] = min;
	}
	return (num);
}
