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
	int x = 0;
	int nu;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (nu = 0; src[nu] != '\0'; nu++)
	{
		if (o < n)
		{
			dest[x + nu] = src[nu];
		}
	}
	dest[x + nu] = '\0';
	return (dest);

}

