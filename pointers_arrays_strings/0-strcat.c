#include "main.h"

/**
 *
 *
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
