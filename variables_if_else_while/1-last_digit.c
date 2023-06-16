#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print "in this scripts used a comparated whit random number
 * for now is more of 5 equal to 0 or less to 6"
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int un;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	un = n % 10;
	if (un > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, un);
	} else if (un == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, un);
	} else if (un < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, un);
	}
	return (0);
}
