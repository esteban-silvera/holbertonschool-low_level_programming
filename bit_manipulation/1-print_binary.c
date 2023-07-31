#include <stdio.h>
#include "main.h"

void
print_binary(unsigned long int n) {
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int x = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			x = 1;
		}
		else if (x)
		{
			putchar('0');
		}

		mask >>= 1;
	}

	if (!x)
	{
		putchar('0');
	}


}
