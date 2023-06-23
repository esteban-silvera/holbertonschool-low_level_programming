#include "main.h"

/**
 * _strcat - the fuction add one string to another
 * @dest: the string whit the two text
 * @src: the strig go to pas to dest
 * Return: result
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int nu;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (nu = 0; src[nu] != '\0'; nu++, n++)
	{
		dest[n] = src[nu];
	}
	dest[n] = '\0';

	return (dest);

}
