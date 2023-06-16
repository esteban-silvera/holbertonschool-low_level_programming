#include <stdio.h>
/**
 * main - main function
 * Return: 0.
 */
int main(void)
{
	int number;

	for (number = 1; number <= 10 ; number++)
	{
		putchar("%d", number);
	}

	putchar('\n');
	return (0);
}
