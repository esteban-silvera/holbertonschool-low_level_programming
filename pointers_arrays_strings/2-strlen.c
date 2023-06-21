#include "main.h"
#include <stdio.h>

/**
 * _sterlen - length of a string
 * @s: is the string retung the length
 */

int _strlen(char *s)
{
	int largo = 0;
	while (*s(largo) != '\0')
	{
		largo++;
	}
	return largo;
}
