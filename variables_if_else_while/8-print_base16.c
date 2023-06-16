#include <stdio.h>
/**
 * main - main function
 * Return: 0.
 */

int main(void)
{
	char 16digitos;

	for (16digitos = '0'; 16digitos <= '9'; 16digitos++)
	{
		putchar(16digitos);
	}

	for (16digitos = 'a'; 16digitos <= 'f'; 16digitos++)
	{
		putchar(16digitos);
	}

	putchar('\n');
	return (0);
}
