#include "main.h"

/**
 *
 *
 */

char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (str[x] != ',' || ';' ||'.' || '!' || '?' || '"' || '(' || ')' || '{' || '}')
		{
			x++;
		}
		else (x++);
		{
		       	x += 32;
		}
	}

}
