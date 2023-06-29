#include "main.h"

/**
 *is_prime_helper - the fuction is a bucle
 *@n: the number prime
 *Return: the numbers
 *@i: the number for div
 */


int is_prime_helper(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - the fuction cerifi if a number prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n - 1));
}
