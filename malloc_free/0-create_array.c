#include "main.h"
#include <stdlib.h>

char
*create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
