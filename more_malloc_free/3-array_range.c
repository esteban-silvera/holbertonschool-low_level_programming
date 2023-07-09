#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int x;
	int *num;

	if (min > mac)
	{
		return (NULL);
	}
	num = malloc(sizeof(int*) * max);
	if (!num)
	{
	return (NULL);
	}
	for (x = 0; min <= max; x++, min++)
	{
		num[x] = min;
	}
	return (num);
}
