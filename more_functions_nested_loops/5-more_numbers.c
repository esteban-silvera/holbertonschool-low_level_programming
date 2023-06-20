#include "main.h"
/**
 *more_numbers- function prints so much numbers
 */
void more_numbers(void)
{
	int times;
	int num;

	for (times = '0'; times <= '9'; times++)
	{
	for (num = '0'; num <= '14'; num++)
	{
	if (num >= 10)
	{
	_putchar((num / 10) + '0');
	}
	_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}
