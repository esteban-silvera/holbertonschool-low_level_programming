#include "main.h"
#include <stdlib.h>

void
*malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (!x)
	{
		exit(98);
	}
	return (x);
}
