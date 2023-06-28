#include "main.h"


/**
 *
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		n * n - 1;
		return (-1);
	}
	else if (n >= 0 &&n <= 1)
	{
		return (1);
	}
	else 
	{
		factorial(n * n - 1);
	}
}
