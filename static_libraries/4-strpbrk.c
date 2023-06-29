#include "main.h"

/**
 *_strpbrk -  print the strig whit bytes
 *@s: string
 *@accept: bits
 *Return: Return value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int x;

	for (i = 0; s[i]; i++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (s[i] == accept[x])
			{
				break;
			}
		}
		if (s[i] == accept[x])
		{
			return (s + i);
		}
	}
	return ('\0');
}
