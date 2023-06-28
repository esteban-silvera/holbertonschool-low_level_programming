#include "main.h"


/**
 *
 *
 */

int factorial(int n)
{
	int x;

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
		x = n - 1
		factorial(n * x);
	}
}
