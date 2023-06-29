#include "main.h"

int
is_mult_helper(int n, int i)
{
	if ((i * i) == 0)
	{
		return (0);
	}
	if (i == i / n)
	{
		return (-1);
	}

	return (is_mult_helper(n, i + 1));
}

int
_sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (is_mult_helper(n, i));
}
