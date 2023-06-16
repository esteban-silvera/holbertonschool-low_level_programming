#include <stdio.h>
/**
 * main - main function
 * Return: 0.
 */
int main(void)
{
	int number;

	for (number = 10; number < 0 ; number--)
	{
		putchar(number + '10');
	}

	putchar('\n');
	return (0);
}
