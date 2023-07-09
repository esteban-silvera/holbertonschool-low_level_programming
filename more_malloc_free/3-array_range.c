#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int x;
	int *num;

	if (min > max)
	{
		return (NULL);
	}
	num = malloc((max - min + 1) * sizeof(int*));
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
