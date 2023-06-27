#include "main.h"

/**
 *
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;

	for (x = 0; x < n; x; x++)
	{
		s[x] = b;
	}
	return (s);
}
