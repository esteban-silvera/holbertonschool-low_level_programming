#include "main.h"
/**
 *puts_half - function prit a midelr of string
 *@str: the string
 */
void puts_half(char *str)

{
	int i = 0;
	int n;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
		if (i % 2 == 0)
		{
			n = i / 2;
		}

	else

	n = ((i - 1) / 2) + 1;

		for (j = n; j < i; j++)
		{
			_putchar(str[j]);

		}
		_putchar('\n');
}
