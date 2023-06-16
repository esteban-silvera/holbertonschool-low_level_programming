#include <stdio.h>
/**
 * main - Main Function "print te abcdario"
 * Return: 0.
 */
int main(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
	{
		putchar(letras);
	}
	putchar('\n');
	return (0);
}
