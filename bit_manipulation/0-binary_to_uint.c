#include <stdio.h>
#include "main.h"


unsigned int
binary_to_uint(const char *b)
{
	unsigned int x = 0, m = 1;
	int num;

	if (b == '\0')
	{
		return (0);
	}
	for (num = 0; b[num];)
		num++;

	for (num -= 1; num >= 0; num--)
	{
		if (b[num] != '0' && b[num] != '1')
		{
			return (0);
		}
		x += (b[len] - '0') * m;
		m *= 2;
	}

}
