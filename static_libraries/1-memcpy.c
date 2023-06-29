#include "main.h"

/**
 * _memcpy - sript function
 * @dest: the recibe
 * @src: the content
 * @n: the cuantiti
 * Return: the cont modific
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
