#include "main.h"
/**
 *print_diagonal - function that prints the line
 *@n: value
 */
void print_diagonal(int n)
{
	int line;
	int dia;

	if (n <= 0)
	{
	_putchar('\n')
	}
	else
	{
	for (dia = 0; dia <= n; +dia+)
	{
	for (line = 0; line < dia; line++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
