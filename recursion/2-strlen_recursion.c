#include "main.h"

/**
 * _strlen_recursion - a
 *
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (s*)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
