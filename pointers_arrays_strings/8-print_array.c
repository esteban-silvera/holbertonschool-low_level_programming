#include "main.h"
#include <stdio.h>
/**
 * print_array - this print a array
 * @a: this the array
 * @n: this is the amont go to print
 */


void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x == n - 1)
		{
			continue;
			printf(", ");
		}


	}
	printf("\n");
}