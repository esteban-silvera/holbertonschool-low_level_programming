#include "main.h"

/**
 * _strcpy - is the function
 * @dest: destinatarion
 * @src: lo que hay que copiar
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	dest[x] = '\0';
}
