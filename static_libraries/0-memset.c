#include "main.h"

/**
 * _memset - sript function
 * @s: the recibe
 * @b: the content
 * @n: the cuantiti
 * Return: retunr the new content
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
