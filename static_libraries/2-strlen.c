#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: is the string retung the length
 * Return: print the length of the string
 */

int _strlen(char *s)
{
	int largo = 0;

	while (s[largo] != '\0')
	{
		largo++;
	}
	return (largo);
}
