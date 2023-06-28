#include "main.h"


/**
 * factorial - retunr the number factorial give you
 * @n: the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1)
	}
	else 
	{
	return (n * factorial (n - 1));
	}
}
