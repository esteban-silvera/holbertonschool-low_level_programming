#include "main.h"
/**
 * print_alphabet_x10 - Utilizo R para repetir y abc para avecedario
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	char a;
	int r;

	for (r = 0; r <= 9; r++)
	{
	for (a = 'a' ; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
