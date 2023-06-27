#include "main.h"
/**
 *_strchr - copie the memory
 *@s: value pointers
 *@c: value
 *Return: Return the value pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{

			return (s + i);
		}
	}
	if (s[i] == c)
	{

		return (s + i);
	}
	return (0);
}
