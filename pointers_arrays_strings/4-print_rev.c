#include "main.h"
/**
 *print_rev - function print a text reverse
 *@s: the string
 */
void print_rev(char *s)
{
	int x;
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (x = n - 1; x >= 0; x--)
	{
		_putchar(s[x])
	}
	_putchar('\n');
}
