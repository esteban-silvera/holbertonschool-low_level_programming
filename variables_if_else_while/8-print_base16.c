#include <stdio.h>
/**
 * main - main function
 * Return: 0.
 */

int main(void)
{
	char digitos;

	for (digitos = '0'; digitos <= '9'; digitos++)
	{
		putchar(digitos);
	}

	for (digitos = 'a'; digitos <= 'f'; digitos++)
	{
		putchar(digitos);
	}

	putchar('\n');
	return (0);
}
