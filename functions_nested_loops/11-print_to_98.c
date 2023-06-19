#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function imprit to number 98
 *@n: its a number recive
 *
 */

void print_to_98(int n)
{

	int nu;

	for (nu = n; nu <= 98; nu++)
	{
	printf("%d", nu);
	if (nu < 98)
	{

	printf(",");
	printf(" ");
	}
	}
	if (n > 98)
	{
	for (nu = n; nu >= 98; nu--)
	{
	printf("%d", nu);
	if (nu > 98)
	{
	printf(",");
	printf(" ");
	}
	}
	}
		printf("\n");
}
