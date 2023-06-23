#include "main.h"

/**
 * _strncat - the fuction add one string to another
 * @dest: the string whit the two text
 * @src: the strig go to pas to dest
 * @n; a value
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int nu;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (nu = 0; src[nu] != n; nu++, x++)
	{
		dest[x] = src[nu];
	}

	return (dest);

}

