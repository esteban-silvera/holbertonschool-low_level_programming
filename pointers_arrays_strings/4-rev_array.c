#include "main.h"

/**
 * reverse_array - pritn a one array reverse mode
 *@a: the array
 *@n: the long of the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int t;
	int l;

	for (t = n - 1; t >= n / 2; t--)
	{
		l = n - 1 - t;
		x = a[t];
		a[t] = a[l];
		a[l] = x;
	}

}
