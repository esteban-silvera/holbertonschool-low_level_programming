#include "main.h"
#include <stdio.h>

/**
 * _isupper - funcition verifi is a uper or not
 *@c: is a paramet
 * Return: retur 1 is a uper return 0 is a lower
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (0);
	}
	return (0);
}
