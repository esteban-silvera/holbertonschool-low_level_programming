#include "main.h"







void int _strlen_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
	_putchar('\n');
	}
}
