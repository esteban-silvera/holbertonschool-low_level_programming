#include "main.h"
/**
 *print_last_digit - sript pritnf
 *@n: value recived
 *Return: Always 1.
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
{
	last = last * -1;
	_putchar(last + '0');
	return (last);
}
	else
{
	_putchar(last + '0');
	return (last);
}

}
