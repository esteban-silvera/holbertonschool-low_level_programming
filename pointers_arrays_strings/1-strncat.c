#include "main.h"

/**
 * _strcat - the fuction add one string to another
 * @dest: the string whit the two text
 * @src: the strig go to pas to dest
 * Return: result
 */

char *_strncat(char *dest, char *src, int n)
{

	int nu;
	
	n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (nu = 0; src[nu] != '\0'; nu++, n++)
	{
		dest[n] = src[nu];
	}

	return (dest);

}

