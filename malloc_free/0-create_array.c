#include "main.h"

char *create_array(unsigned int size, char c)
{
	char array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size)
	if (size != 0)
		{
			array[0] = c
		}
}
