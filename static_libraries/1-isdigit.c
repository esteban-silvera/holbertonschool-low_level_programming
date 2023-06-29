#include "main.h"
#include <stdio.h>

/**
 * _isdigit - funcition verifi is a number or not
 *@c: is a paramet
 * Return: return 1 is a number 0 is dont a number
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
	return (0);
	}
	return (0);
}
