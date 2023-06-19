#include "main.h"
/**
 *print_sign - sript
 * @n: is the character
 *
 * Return: Returns 1  0 or -1  if is more  == o a lowr
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
