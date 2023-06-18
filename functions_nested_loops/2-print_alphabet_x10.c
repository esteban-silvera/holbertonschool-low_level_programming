#include "main.h"
/**
 * print_alphabet_x10 - Utilizo R para repetir y abc para avecedario
 * Return: 0.
 */

	void print_alphabet_x10(void)
{
	char abc;
	int R;

	for (R = 0; R <= 9; R++)
	{
		for (abc = 'a' ; abc <= 'z'; abc++)
			{
				_putchar(abc);
			}
		_putchar('\n');
	}
	return (0);
}
