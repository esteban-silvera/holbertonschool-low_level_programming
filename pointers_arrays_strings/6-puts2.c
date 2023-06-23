#include "main.h"
/**
 *puts2 - Function pritns a number
 *@str: the value
 */

void puts2(char *str)
{
	int x = 0;
	int n;

	while (str[x] != '\0')
	{
		x++;
	}
	for (n = 0; n < x; n++)
	{
		if (n % 5 == 0)
			{
				_putchar(str[n]);
			}
	}
	_putchar('\n');
}
