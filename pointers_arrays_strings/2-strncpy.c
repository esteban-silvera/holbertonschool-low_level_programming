#include "main.h"

/**
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
	if (src[i] != '\0')
	{
	dest[i] = src[i];
	}
	else
	{
	dest[i] = '\0';
	break;
	}
}

}
