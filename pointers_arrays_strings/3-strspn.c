#include "main.h"

/**
 *_strspn -  length a substring
 *@s: substring
 *@accept: value 
 *Return: Return i
 */
unsigned int _strspn(char *s, char *accept)
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
		if (accept[x] == '\0')
		{
			break;
		}
	}

	return (i);
}
