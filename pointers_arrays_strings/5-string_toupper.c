#include "main.h"

/**
 * string_toupper - the fuction change te lower for uper case
 *@a: the string
 *Return: the string
 */

char *string_toupper(char *a)
{
	int x = 0;

	while (a[x])
	{
		if (a[x] = 'a' && a[x] <= 'z')
			a[x] -= 32;
		x++;
	}
	return (x);
}
