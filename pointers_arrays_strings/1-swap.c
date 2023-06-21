#include "main.h"

/**
 * swap_int - swap the value a and b
 * @a: its a first number paramet
 * @b: its a second number paramet
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
