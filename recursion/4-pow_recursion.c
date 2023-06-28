#include "main.h"
/**
 * _pow_recursion - print a numbre whit recurcion
 *@y: the number
 *@x: the recurcion
 *Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
